#ifndef abstsyntree_expr_hpp
#define abstsyntree_expr_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include "abstsyntree.hpp"
//global x - use bool for not in a function?
//trans and new lines
//param lists
class expr_list: public node{
	public:
		std::vector<nodePtr> v;
		expr_list(nodePtr in){ push(in);}
		void push(nodePtr in){ v.push_back(in); };
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"expr_list"<<std::endl;};
};

class string_list: public node{
	public:
		std::vector<std::string*> v;
		string_list(std::string* in){ v.push_back(in);}
		void push(std::string* in, std::vector<std::string*> a){ a.push_back(in); };
		void translate(int& tc);
		void print(){std::cerr<<"string_list"<<std::endl;};
};
class init_list: public node{
	public:
		std::vector<nodePtr> v;
		init_list(nodePtr in){ v.push_back(in);}
		void push(nodePtr in, std::vector<nodePtr> a){ a.push_back(in); };
		void translate(int& tc);
		void print(){std::cerr<<"init_list"<<std::endl;};
};
class type_list: public node{
	public:
		std::vector<nodePtr> v;
		type_list(nodePtr in){ push(in);}
		void push(nodePtr in){ v.push_back(in); };
		void translate(int& tc);
		void print(){std::cerr<<"expr_list"<<std::endl;};
};
//-------- base node for similar exprs
class bracketed_expr: public node{
  protected:
    std::string LB;
		nodePtr E;
    std::string RB;
  public:
    bracketed_expr(std::string lb, std::string rb,nodePtr e): LB(lb), E(e), RB(rb) {}
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"br_expr"<<std::endl;};
};
class binary_expr: public node{
  protected:
    nodePtr L;
		std::string op;
    nodePtr R;
  public:
    binary_expr(nodePtr lval, std::string o ,nodePtr rval): L(lval), op(o), R(rval) {}
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"binary_expr"<<std::endl;};
};
//--------

class seperator_expr: public node{
	public:
		nodePtr L;
		nodePtr R;
		seperator_expr(nodePtr lval, nodePtr rval): L(lval), R(rval) {}
		void translate(int& tc);
		void print(){std::cerr<<"seperator_expr"<<std::endl;};
		void compile(translate_context &context);
};
//-----------------------

class cond_expr: public node{
	public:
		nodePtr condition;
		nodePtr option1;
		nodePtr option2;
		cond_expr(nodePtr c, nodePtr o1,nodePtr o2): condition(c), option1(o1), option2(o2){}
		void translate(int& tc);
		//void compile(translate_context &context);
		void print(){std::cerr<<"cond_expr"<<std::endl;};
};
class cast_expr: public node{
	public:
		nodePtr L;
		nodePtr R;
		cast_expr(nodePtr lval, nodePtr rval): L(lval), R(rval){}
		void translate(int& tc);
		//void compile(translate_context &context);
		void print(){std::cerr<<"cast_expr"<<std::endl;};
};

class unary_expr: public node{
  public:
		nodePtr op;
    nodePtr S;
		unary_expr(nodePtr oper, nodePtr sideval): op(oper),S(sideval) {}
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"unary_expr"<<std::endl;};
};
class incr: public node{
  public:
    nodePtr S;
		incr(nodePtr sideval): S(sideval) {}
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"incr"<<std::endl;};
};
class decr: public node{
  public:
    nodePtr S;
		decr(nodePtr sideval): S(sideval) {}
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"decr"<<std::endl;};
};
class member: public node{
	public:
		nodePtr object;
		std::string subject;
		member(nodePtr l, std::string r): object(l),subject(r){}
		void translate(int& tc);
		void print(){std::cerr<<"member"<<std::endl;};
		void compile(translate_context &context);
};
//constant_expression? not sure if needed
class function_name: public node{
	public:
		nodePtr args;
		nodePtr name;
		std::string lb;
		std::string rb;
		function_name(nodePtr n, nodePtr a, std::string lval, std::string rval): name(n), args(a),lb(lval),rb(rval){}
		void translate(int& tc);
		void print(){std::cerr<<"function_name"<<std::endl;};
		void compile(translate_context &context);
};
class type_name: public node{
public:
	nodePtr l;
	nodePtr r;
	type_name(nodePtr left, nodePtr right): l(left), r(right){}
	void translate(int& tc);
	void print(){std::cerr<<"type_name"<<std::endl;};
	void compile(translate_context &context);
};
class param_decl: public node{
public:
	nodePtr l;
	nodePtr r;
	param_decl(nodePtr left, nodePtr right): l(left), r(right){}
	void translate(int& tc);
	void print(){std::cerr<<"param_decl"<<std::endl;};
	void compile(translate_context &context);
};
//-----------------------operators

class unary_op: public node{
	public:
		std::string op;
		unary_op(std::string oper): op(oper){}
		void translate(int& tc);
		void print(){std::cerr<<"unary_op"<<std::endl;};
		void compile(translate_context &context);
};
class para_t_list: public node{
	public:
		nodePtr list;
		std::string comma;
		std::string ellipses;
		para_t_list(nodePtr l): list(l), ellipses(""),comma(""){}
		para_t_list(nodePtr l, std::string c,std::string e): list(l), comma(c),ellipses(e){}
		void translate(int& tc);
		void print(){std::cerr<<"para_t_list"<<std::endl;};
		//void compile(translate_context &context);
};
/*
class assign_op: public node{
	public:
		std::string op;
		assign_op(std::string oper): op(oper){};
		void translate(int& tc);
		//void compile(translate_context &context);
};
*/
class type_spec: public node{
	public:
		std::string type;
		type_spec(std::string kind): type(kind){}
		void translate(int& tc);
		void print(){std::cerr<<"type_spec"<<std::endl;};
		//void compile(translate_context &context);
};
//-----------------------
/*
class incr: public node{
	nodePtr subject;
	public:
		incr(nodePtr lval): subject(lval) {}
		void translate(int& tc);
		//void compile(translate_context &context);
};
class decr: public node{
	nodePtr subject;
	public:
		decr(nodePtr lval): subject(lval) {}
		void translate(int& tc);
		//void compile(translate_context &context);
};
*/
//relational expressions-----------------------

class type_qual: public node{
	public:
		std::string qual;
		type_qual(std::string q): qual(q) {}
		void translate(int& tc);
		void print(){std::cerr<<"type_qual"<<std::endl;};
	  void compile(translate_context &context);
};
class array: public node{
	nodePtr name;
	nodePtr args;
	public:
		array(nodePtr lval, nodePtr rval): name(lval), args(rval) {}
		void translate(int& tc);
		void print(){std::cerr<<"array"<<std::endl;};
		void compile(translate_context &context);
};
class init: public node{
	public:
		nodePtr n;
		std::string comm;
		init(nodePtr lval, std::string s): n(lval), comm(s) {}
		void translate(int& tc);
		void print(){std::cerr<<"init"<<std::endl;}
		//void compile(translate_context &context);
};
class size_of: public node{
	public:
		std::string so;
		std::string lb;
		std::string rb;
		nodePtr n;
		size_of(std::string s, nodePtr rval,std::string l,std::string r): so(s), n(rval),lb(l),rb(r) {}
		void translate(int& tc);
		void print(){std::cerr<<"size_of"<<std::endl;};
		//void compile(translate_context &context);
};

class translation_unit: public node{
	nodePtr l;
	nodePtr r;
	public:
		translation_unit(nodePtr lval, nodePtr rval): l(lval), r(rval) {}
		void translate(int& tc);
		void print(){std::cerr<<"translation_unit"<<std::endl;};
		void compile(translate_context &context);
};


#endif
