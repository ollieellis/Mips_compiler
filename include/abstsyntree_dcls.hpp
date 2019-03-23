#ifndef abstsyntree_dcls_hpp
#define abstsyntree_dcls_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>

class decl_node: public node{
		public:
			nodePtr type;
			nodePtr name;
			nodePtr params;
			nodePtr body;
			std::vector<nodePtr> decls;
			decl_node(){};
			decl_node(nodePtr n_type, nodePtr n_name, nodePtr n_params,  nodePtr n_body): type(n_type), params(n_params), name(n_name), body(n_body){};
			virtual void translate(translate_context &context);
			virtual void compile(translate_context &context);
};
class declarator: public decl_node{
	public:
			nodePtr q;
			declarator(nodePtr in): q(in),decl_node(){};
			virtual void translate(translate_context &context);
			virtual void compile(translate_context &context);
};
class p_declarator: public decl_node{
	public:
			nodePtr q;
			p_declarator(nodePtr in): q(in),decl_node(){};
			virtual void translate(translate_context &context);
			virtual void compile(translate_context &context);
};
class decl_list: public decl_node{
	public:
			decl_list(nodePtr in): decl_node(in){};
			virtual void translate(translate_context &context);
			virtual void compile(translate_context &context);
};
//declarations---------------------------------------------------
class function_definition: public decl_node{
	public:
		function_definition(nodePtr type, nodePtr name, nodePtr params, nodePtr body): decl_node(type, name, params, body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class external_dec: public decl_node{
	public:
		external_dec(nodePtr type, nodePtr name,nodePtr params, nodePtr body): decl_node(type, name, params, body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class struct_decl: public decl_node{
	public:
		struct_decl(nodePtr name, nodePtr body): decl_node(NULL, name, NULL, body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class struct_decl_list: public decl_node{
	public:
		struct_decl_list(nodePtr type, nodePtr name,nodePtr params, nodePtr body): decl_node(type, name, params, body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class init_decl: public decl_node{
	public:
		init_decl(nodePtr name, nodePtr body): decl_node(NULL, name, NULL, body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class init_decl_list: public decl_node{
	public:
		init_decl_list(nodePtr name, nodePtr body): decl_node(NULL, name, NULL, body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class transl_unit: public decl_node{
	public:
		transl_unit(nodePtr in): decl_node(in){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class strorunion_spec: public decl_node{
	public:
		strorunion_spec(nodePtr n_type, nodePtr n_name, nodePtr n_params,  nodePtr n_body): decl_node(type, name, params, NULL){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
#endif
//--------
