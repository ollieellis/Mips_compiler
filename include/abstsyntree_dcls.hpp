#ifndef abstsyntree_dcls_hpp
#define abstsyntree_dcls_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>


class declarator: public node{
	public:
			nodePtr q;
			declarator(nodePtr in): q(in){};
			virtual void translate();
			//void compile(translate_context &context);
			void print(){std::cerr<<"declarator"<<std::endl;};
};
class d_declarator: public node{
	public:
			nodePtr dd;
			nodePtr args;
			std::string lb;
			std::string rb;
			d_declarator(nodePtr d,nodePtr a,std::string l,std::string r): dd(d),args(a), lb(l),rb(r){};
			void translate();
			void print(){std::cerr<<"d_declarator"<<std::endl;};
			//void compile(translate_context &context);
};
class p_declarator: public node{
	public:
			nodePtr q;
			p_declarator(nodePtr in): q(in){};
			virtual void translate();
			void print(){std::cerr<<"p_declarator"<<std::endl;};
			//void compile(translate_context &context);
};
class decl_list: public node{
	public:
			std::vector<nodePtr> v;
			decl_list(nodePtr in){push(in);}
			void push(nodePtr in){v.push_back(in);}
			virtual void translate();
			void print(){std::cerr<<"decl_list"<<std::endl;};
			//void compile(translate_context &context);
};
//declarations---------------------------------------------------
class function_definition: public node{
	public:
		nodePtr type;
		nodePtr name;
		nodePtr params;
		nodePtr body;
		std::string l;
		std::string r;
		bool fact;
		function_definition(nodePtr t, nodePtr n, nodePtr p, nodePtr b, bool f): type(t),name(n), params(p), body(b), fact(f){};
		virtual void translate();
	  void compile(translate_context &context);
		void print(){std::cerr<<"funcdef"<<std::endl;};
};
class external_dec: public node{
	public:
		nodePtr type;
		nodePtr name;
		nodePtr params;
		nodePtr body;
		external_dec(nodePtr t, nodePtr n,nodePtr p, nodePtr b): type(t),name(n), params(p), body(b){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"external_dec"<<std::endl;};
};
/*
class struct_decl: public node{
	public:
		nodePtr name;
		nodePtr body;
		struct_decl(nodePtr n, nodePtr b): name(n), body(b){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"struct_decl"<<std::endl;};
};
class struct_decl_list: public node{
	public:
		nodePtr type;
		nodePtr name;
		nodePtr params;
		nodePtr body;
		struct_decl_list(nodePtr t, nodePtr n,nodePtr p, nodePtr b): type(t),name(n), params(p), body(b){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"struct_decl_list"<<std::endl;};
};
*/
class init_decl: public node{
	public:
		nodePtr name;
		nodePtr body;
		init_decl(nodePtr n, nodePtr b): name(n), body(b){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"init_decl"<<std::endl;};
};

class dir_abst_declarator: public node{
	public:
		nodePtr name;
		nodePtr args;
		std::string lb;
		std::string rb;
		dir_abst_declarator(nodePtr n, nodePtr a, std::string l, std::string r): name(n), args(a), lb(l),rb(r){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"dir_abst_declarator"<<std::endl;};
};
class init_decl_list: public node{
	public:
		nodePtr name;
		nodePtr body;
		init_decl_list(nodePtr n, nodePtr b): name(n), body(b){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"init_decl_list"<<std::endl;};
};
class decl_specs: public node{
	public:
		nodePtr l;
		nodePtr r;
		decl_specs(nodePtr nl, nodePtr nr): l(nl), r(nr){};
		virtual void translate();
		//void compile(translate_context &context);
		void print(){std::cerr<<"decl_specs"<<std::endl;};
};

#endif
//--------
