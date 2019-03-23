#ifndef abstsyntree_expr_hpp
#define abstsyntree_expr_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include "abstsyntree.hpp"

class argument_expression_list: public node{
	public:
		std::vector<node> list;
};
//-------- base node for similar exprs
class binary_expr: public node{
  protected:
    nodePtr L;
		std::string op;
    nodePtr R;
  public:
    binary_expr(nodePtr lval, std::string o ,nodePtr rval): L(lval), op(o), R(rval) {};
};
//--------

class seperator_expr: public node{
	public:
		nodePtr L;
		nodePtr R;
		seperator_expr(nodePtr lval, nodePtr rval): L(lval), R(rval) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
//-----------------------

class cond_expr: public node{
	public:
		nodePtr condition;
		nodePtr option1;
		nodePtr option2;
		cond_expr(nodePtr c, nodePtr o1,nodePtr o2): condition(c), option1(o1), option2(o2){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class unary_expr: public node{
  public:
		nodePtr op;
    nodePtr S;
		unary_expr(nodePtr oper, nodePtr sideval): op(oper),S(sideval) {};
};
class member: public node{
	public:
		nodePtr object;
		std::string subject;
		member(nodePtr l, std::string r): object(l),subject(r){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
//constant_expression? not sure if needed
class function_name: public node{
public:
	nodePtr args;
	nodePtr name;
	function_name(nodePtr n, nodePtr a): name(n), args(a){};
	void translate(translate_context &context);
	void compile(translate_context &context);
};
//-----------------------operators

class unary_op: public node{
	public:
		std::string op;
		unary_op(std::string oper): op(oper){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
/*
class assign_op: public node{
	public:
		std::string op;
		assign_op(std::string oper): op(oper){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
*/
class type_spec: public node{
	public:
		std::string type;

		type_spec(std::string kind): type(kind){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
//-----------------------
class incr: public node{
	nodePtr subject;
	public:
		incr(nodePtr lval): subject(lval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class decr: public node{
	nodePtr subject;
	public:
		decr(nodePtr lval): subject(lval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
//relational expressions-----------------------

class type_qual: public node{
	public:
		std::string qual;
		type_qual(std::string q): qual(q) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class array: public node{
	public:
		array(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class enum_spec: public node{
	std::string e_n;
	std::string name;
	nodePtr params;
	public:
		enum_spec(std::string e, std::string n, nodePtr p): e_n(e),name(n),params(p){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};


#endif
