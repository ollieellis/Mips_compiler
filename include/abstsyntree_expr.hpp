#ifndef abstsyntree_expr_hpp
#define abstsyntree_expr_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>
//extended base nodes----------
class binary_expr: public expr_node{
  protected:
    nodePtr L;
    nodePtr R;
  public:
    binary_expr(nodePtr lval, nodePtr rval): L(lval), R(rval) {};
};
class unary_expr: public expr_node{
  protected:
    nodePtr R;
  public:
		unary_expr(nodePtr rval): R(rval) {};
};
//basic units----------------
class identifier: public expr_node{
	public:
		identifier(std::string _value): expr_node(_value) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class constant: public expr_node{//number, can be int_const or float_const or... etc?
	public:
		constant(std::string _value): expr_node(_value){};
		void translate(translate_context &context);
		void compile(translate_context &context);
};
class str_lit: public expr_node{
	public:
		str_lit(std::string _value): expr_node(_value) {};
		void  translate(translate_context &context);
		void compile(translate_context &context);
};
//---------------- expressions
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

//-----------------------
class postfix_expr: public unary_expr{
	protected:
		nodePtr R;
	public:
		postfix_expr(nodePtr r): unary_expr(r) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class iseq_expr: public binary_expr{
	public:
		iseq_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class and_expr: public binary_expr{
	public:
		and_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class xor_expr: public binary_expr{
	public:
		xor_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};

class or_expr: public binary_expr{
	public:
		or_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate(translate_context &context);
		void compile(translate_context &context);
};


#endif
