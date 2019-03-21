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
			decl_node(nodePtr n_type, nodePtr n_name, nodePtr n_params,  nodePtr n_body): type(n_type), params(n_params), name(n_name), body(n_body){};
			virtual void translate(translate_context &context) = 0;
			virtual void compile(translate_context &context) = 0;
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
#endif
//--------
