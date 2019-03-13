#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <list>

//typedef extern const Expression* exp_p;


class node{
protected:
	node();
};

typedef std::shared_ptr<node> nodePtr; //don't do cyclical references
//---------------- base nodes
/*
typdef enum{
//expression tokens
}; expr_kind;
*/
class expr_node: public node{
	protected:
		std::string value;
		//std::vector<expr_nodePtr> branches;
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
		std::vector<nodePtr> body;
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

class integer_type: public type{
	protected:

	public:
};
class float_type: public type{
	protected:

	public:
};
//types_node
//param_node
/*class primary_expr: public expr_node{
	//functions
	//virtual void print() = 0;

};*/
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
};
//----------------


class identifier: public expr_node{
	public:
		identifier(std::string _value): expr_node(_value) {};
		//int32_t translate();
};
class constant: public expr_node{//number, can be int_const or float_const or... etc?
	public:
		constant(std::string _value): expr_node(_value){};
		//int32_t translate();
};
class str_lit: public expr_node{
	public:
		str_lit(std::string _value): expr_node(_value) {};
		//int32_t translate();
};

//---------------- arith expr
//class additive_expr: public binary_expr{}; //check

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

/*class multi_expr: public binary_expr{
	public:
		multi_expr(std::string _kind, std::string _value, nodePtr lval, nodePtr rval): binary_expr(_kind, _value, lval, rval){};
		//int32_t translate();
};*/

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
class postfix_expr{
	protected:
		nodePtr R;
	public:
		postfix_expr(nodePtr optionalr): R(optionalr){};
};
/*class expr_nodeession_postfix_expression {
	protected:
	exp_nodePtr exp;
	public:
	assignment_stmt(string name, exp_nodePtr expression);
	void print();
	void translate();
};
*/
class argument_expr_list{
	protected:
	public:

 };

class shift_expr{

};

class cast_expr{

};


//---------------- boolean expr

class relational_expr: public binary_expr{
	public:
		relational_expr(nodePtr lval, nodePtr rval): binary_expr(lval,rval) {};
};
class EQ_expr: public relational_expr{
	public:
		EQ_expr(nodePtr lval, nodePtr rval): relational_expr(lval, rval){};
};
class NEQ_expr: public relational_expr{
	public:
		NEQ_expr(nodePtr lval, nodePtr rval): relational_expr(lval, rval) {};
};

class equality_expr: public relational_expr{
	public:
		equality_expr(nodePtr lval, nodePtr rval): relational_expr(lval,rval){};
};

class and_expr{

};

class exclusive_or_expr{

};

class inclusive_or_expr{};

class logical_and_expr{};

class logical_or_expr{};

class conditional_expr{};
/*
assignment_expression

assignment_operator

expression

constant_expression
*/
class labeled_stmt{

};
class compound_stmt{

};
class expression_stmt{

};
class selection_stmt{//ifelse
	protected:

	public:

};
class iteration_stmt{

};
class jump_stmt{

};
/*

declaration_specifiers

init_declarator_list


init_declarator

storage_class_specifier

type_specifier

struct_or_union_specifier

struct_or_union

struct_declaration_list

struct_declaration

specifier_qualifier_list

struct_declarator_list

struct_declarator

enum_specifier

enumerator_list

enumerator

type_qualifier

declarator

direct_declarator

pointer


type_qualifier_list


parameter_kind_list

parameter_list

parameter_declaration

identifier_list

type_name

abstract_declarator

direct_abstract_declarator

initializer

initializer_list
*/

/*

declaration_list

statement_list

translation_unit


external_declaration


*/
class function_definition: public declaration{
	public:
	protected:

};
//----------------

extern const node *parseAST();

#endif
