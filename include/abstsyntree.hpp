#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>

class translate_context{
	public:
    std::vector<int32_t> params;
    std::map<std::string,int32_t> symtab;
};

class node;
typedef std::shared_ptr<node> nodePtr;//don't do cyclical references

class node{
	protected:
		node();
	public:
		//virtual void translate() = 0;
		//virtual void compile() = 0;
};
//---------------- base nodes
class expr_node: public node{
	protected:
		std::string value;
	public:
		//expr_node(std::string _kind, std::string _value, const std::vector<TreePtr> &_branches): type(_kind), value(_value), branches(_branches){};
		expr_node(){}
		expr_node(std::string val): value(val){}
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
		decl_node(nodePtr n_name, std::vector<nodePtr> n_body): name(n_name), body(n_body){};
		virtual void translate() = 0;
		virtual void compile() = 0;
};
//types------------
class type{
	protected:

	public:
};
class integer_type: public type{
	protected:

	public:
};
class float_type: public type{
	protected:

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
		//void translate();
		//void compile();
};
class constant: public expr_node{//number, can be int_const or float_const or... etc?
	public:
		constant(std::string _value): expr_node(_value){};
		//void translate();
		//void compile();
};
class str_lit: public expr_node{
	public:
		str_lit(std::string _value): expr_node(_value) {};
		//void translate();
		//void compile();
};

//---------------- expressions
class plus_expr: public binary_expr{
	public:
		plus_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		//void translate();
		////void compile();
};
class minus_expr: public binary_expr{
  public:
		minus_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		//void translate();
		////void compile();
};


class times_expr: public binary_expr{
	public:
		times_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		//void translate();
		////void compile();
};
class div_expr: public binary_expr{
  public:
    div_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval){};
		//void translate();
		////void compile();
};
//-----------------------
class postfix_expr: public unary_expr{
	protected:
		nodePtr R;
	public:
		postfix_expr(nodePtr r): unary_expr(r) {};
};
class iseq_expr: public binary_expr{
	public:
		iseq_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};

class and_expr: public binary_expr{
	public:
		and_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};

class xor_expr: public binary_expr{
	public:
		xor_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};

class or_expr: public binary_expr{
	public:
		or_expr(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
		void translate();
		void compile();
};
//statements---------------------------------------------------
class while_stmt: public binary_expr{
public:
	while_stmt(nodePtr lval, nodePtr rval): binary_expr(lval, rval) {};
	virtual void translate();
	virtual void compile();
};

//declarations---------------------------------------------------
class function_definition: public decl_node{
	public:
		function_definition(nodePtr name, std::vector<nodePtr> body): decl_node(name,body){};
		virtual void translate();
		virtual void compile();
};
//----------------

extern const node *parseAST();

#endif
