#ifndef abstsyntree_expr_hpp
#define abstsyntree_expr_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include "abstsyntree.hpp"
class expr_node: public node{
	public:
		virtual void translate(translate_context &context) = 0;
		virtual void compile(translate_context &context) = 0;
};

class argument_expression_list: public node{
	public:
		std::vector<node> list;
		virtual void translate(translate_context &context) = 0;
		virtual void compile(translate_context &context) = 0;
};
//-------- base node for similar exprs
class binary_expr: public expr_node{
  protected:
    nodePtr L;
    nodePtr R;
  public:
    binary_expr(nodePtr lval, nodePtr rval): L(lval), R(rval) {};
};
//--------
class plus_expr: public binary_expr{
	public:
		plus_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class minus_expr: public binary_expr{
  public:
		minus_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class times_expr: public binary_expr{
	public:
		times_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class div_expr: public binary_expr{
  public:
    div_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class mod_expr: public binary_expr{
  public:
    mod_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class seperator_expr: public binary_expr{
	public:
		seperator_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
//-----------------------

class cond_expr: public expr_node{
	public:
		nodePtr condition;
		nodePtr option1;
		nodePtr option2;
		cond_expr(nodePtr c, nodePtr o1,nodePtr o2): condition(c), option1(o1), option2(o2){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class assign_expr: public binary_expr{
	public:
		assign_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class shift_expr: public binary_expr{
	public:
		shift_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class unary_expr: public expr_node{
  public:
		nodePtr op;
    nodePtr S;
		unary_expr(nodePtr oper, nodePtr sideval): op(oper),S(sideval) {};
};
//constant_expression? not sure if needed
class function_call: public binary_expr{
	function_call(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
	void translate(translate_context &context);
	void compile(translate_context &context);
};
//-----------------------operators

class unary_op: public expr_node{
	public:
		std::string op;
		unary_op(std::string oper): op(oper){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class assign_op: public expr_node{
	public:
		std::string op;
		assign_op(std::string oper): op(oper){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class type_spec: public expr_node{
	public:
		std::string type;

		type_spec(std::string kind): type(kind){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
//-----------------------
class incr: public expr_node{
	nodePtr subject;
	public:
		incr(nodePtr lval): subject(lval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class decr: public expr_node{
	nodePtr subject;
	public:
		decr(nodePtr lval): subject(lval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
//relational expressions-----------------------
class isequal_expr: public binary_expr{
	public:
		isequal_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class notequal_expr: public binary_expr{
	public:
		notequal_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class and_expr: public binary_expr{
	public:
		and_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class bwand_expr: public binary_expr{
	public:
		bwand_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class lt: public binary_expr{
	public:
		lt(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class gt: public binary_expr{
	public:
		gt(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class gte: public binary_expr{
	public:
		gte(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class lte: public binary_expr{
	public:
		lte(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};


class bwxor_expr: public binary_expr{
	public:
		bwxor_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class bwor_expr: public binary_expr{
	public:
		bwor_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class or_expr: public binary_expr{
	public:
		or_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class lshift: public binary_expr{
	public:
		lshift(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class rshift: public binary_expr{
	public:
		rshift(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class type_qual: public expr_node{
	public:
		std::string qual;
		type_qual(std::string q): expr_node() {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};


#endif
