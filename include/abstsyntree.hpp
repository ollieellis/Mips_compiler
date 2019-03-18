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
		std::vector<uint32_t> regs;//just use unchangeable registers pluse two
};

class node;
typedef std::shared_ptr<node> nodePtr;//don't do cyclical references
nodePtr Parse(
    std::istream &src
);

class node{
	protected:
	public:
		node();
		virtual void translate(translate_context &context) = 0;
		virtual void compile(translate_context &context) = 0;
};
//---------------- base nodes
class expr_node: public node{
	protected:
		std::string value;
	public:
		expr_node(){}
		expr_node(std::string val): value(val){}

		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context) = 0;
};
class stmt_node: public node{
	protected:
		std::vector<nodePtr> stmts;
	public:
		stmt_node(std::vector<nodePtr> body): stmts(body){}
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context) = 0;
};
class decl_node: public node{
	protected:
		nodePtr name;
		std::vector<nodePtr> body;
	public:
		decl_node(nodePtr n_name, std::vector<nodePtr> n_body): name(n_name), body(n_body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context) = 0;
};
//types------------
/*class type: public node{
	protected:
		std::string kind;
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
class pointer: public type{
	protected:

	public:
};
*/
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
		std::string  translate(translate_context &context);
		std::string compile(translate_context &context);
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
//statements---------------------------------------------------
class while_stmt: public stmt_node{
	public:
		while_stmt(std::vector<nodePtr> body): stmt_node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class ifelse_stmt: public stmt_node{
	protected:
		nodePtr condition;
		std::vector<nodePtr> else_body;
	public:
		ifelse_stmt(nodePtr fact, std::vector<nodePtr> body, std::vector<nodePtr> other): condition(fact), else_body(other), stmt_node(body) {};//body - then
		ifelse_stmt(nodePtr fact, std::vector<nodePtr> body): condition(fact), stmt_node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class return_stmt: public stmt_node{
	public:
		return_stmt(std::vector<nodePtr> body): stmt_node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
//declarations---------------------------------------------------
class function_definition: public decl_node{
	protected:
		std::vector<nodePtr> args;
	public:
		function_definition(nodePtr name, std::vector<nodePtr> body): decl_node(name,body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
//----------------
void compile_all(std::string returnval, translate_context context, nodePtr program){
	    program->compile(context);
	    std::cout<<" "<<returnval<<"\n";
};
extern const node *parseAST();

#endif
