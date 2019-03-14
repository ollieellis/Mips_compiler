#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <list>

class node{
	protected:
		node();
	public:
		virtual void translate() = 0;
		virtual void compile() = 0;
};

typedef std::shared_ptr<node> nodePtr; //don't do cyclical references
//---------------- base nodes

class expr_node: public node{
	protected:
		std::string value;
	public:
		//expr_node(std::string _kind, std::string _value, const std::vector<TreePtr> &_branches): type(_kind), value(_value), branches(_branches){};
		expr_node();
		//expr_node(std::string _kind, std::string _value): node(_kind), value(_value){};
		//template<class ...TArgs>//?
		//expr_node(std::string _kind, TArgs ...args): type(_kind), branches{args...};{};//?
		virtual void translate() = 0;
		virtual void compile() = 0;
};
class stmt_node: public node{
	protected:
		std::vector<nodePtr> stmts;
	public:
		virtual void translate() = 0;
		virtual void compile() = 0;
};
class decl_node: public node{
	protected:
		nodePtr name;
		std::vector<nodePtr> body;
	public:
		virtual void translate() = 0;
		virtual void compile() = 0;
};
//types------------
class integer_type: public type{
	protected:

	public:
};
class float_type: public type{
	protected:
		nodePtr
	public:
};
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
		void translate();
		void compile();
};
class constant: public expr_node{//number, can be int_const or float_const or... etc?
	public:
		constant(std::string _value): expr_node(_value){};
		void translate();
		void compile();
};
class str_lit: public expr_node{
	public:
		str_lit(std::string _value): expr_node(_value) {};
		void translate();
		void compile();
};

//---------------- expressions
class plus_expr: public binary_expr{
	public:
		plus_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate();
		void compile();
};
class minus_expr: public binary_expr{
  public:
		minus_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate();
		void compile();
};


class times_expr: public binary_expr{
	public:
		times_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate();
		void compile();
};
class div_expr: public binary_expr{
  public:
    div_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		void translate();
		void compile();
};
//-----------------------
class postfix_expr: public unary_expr{
	protected:
		nodePtr R;
	public:
		postfix_expr(nodePtr optionalr): R(optionalr){};
};
class iseq_expr: public binary_expr{
	public:
		NEQ_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};

class isneq_expr: public binary_expr{
	public:
		and_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};

class xor_expr: public binary_expr{
	public:
		exclusive_or_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};

class or_expr: public binary_expr{
	public:
		exclusive_or_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};
//statements---------------------------------------------------
class while_stmt{
public:
	while_stmt(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
	void translate();
	void compile();
}

//declarations---------------------------------------------------
class function_definition: public declaration{
	public:
		function_definition(nodePtr name, nodePtr body): declaration(name,body){};
		void translate();
		void compile();
};
//----------------

extern const node *parseAST();

#endif
