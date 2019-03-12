#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include "abstsyntree_evaluate.hpp"

typedef std::shared_ptr<node> nodePtr;
//typedef extern const Expression* exp_p;
extern const std::map<std::string,double> &symtab;//check

class node {
	protected:
		std::string type;
		std::string value;
		//std::vector<nodePtr> branches;
	public:
		//node(std::string _type, std::string _value, const std::vector<TreePtr> &_branches): type(_type), value(_value), branches(_branches){}
		node(std::string _type, std::string _value): type(_type), value(_value){}

		//template<class ...TArgs>//?
		//node(std::string _type, TArgs ...args): type(_type), branches{args...}{}//?
		virtual uint_t evaluate() = 0;
		//virtual uint_t translate() = 0;
		//virtual uint_t compile() = 0;
}

//---------------- base nodes
/*class primary_expr: public node{
	//functions
	//virtual void print() = 0;

}*/
class binary_expr: public node {
  protected:
    node *L;
    node *R;
  public:
    binary_expr(std::string _type, std::string _value, node *lval, node *rval): node(_type, _value), L(lval), R(rval) {}
}
//----------------


class identifier: public node {
	public:
		identifier(std::string _type, std::string _value): node(_type, _value) {}
		uint_t evaluate();
}
class const_: public node{//number, can be int_const or float_const or... etc?
	public:
		const(std::string _type, std::string _value): node( _type, _value){}
		uint_t evaluate();
}
class str_lit: public node{
	public:
		str_lit(std::string _type, std::string _value): node( _type, _value) {}
		uint_t evaluate();
}

//---------------- arith expr
//class additive_expr: public binary_expr{} //check

class plus_expr: public additive_expr{
	public:
		plus_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr( _type, _value, lval, rval){}
		uint_t evaluate();
}
class minus_expr: public additive_expr{
  public:
		div_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr( _type, _value, lval, rval){}
		uint_t evaluate();
}

class multi_expr: public binary_expr{
	public:
		mult_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr( _type, _value, lval, rval){}
		uint_t evaluate();
}

class times_expr: public multi_expr{
	public:
		times_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr( _type, _value, lval, rval){}
		uint_t evaluate();
}
class div_expr: public multi_expr{
  public:
    plus_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr( _type, _value, lval, rval){}
		uint_t evaluate();
}
//-----------------------
class postfix_expr{
	protected:
		node *R;
	public:
		postfix_expr(std::string _type, std::string _value, node *optionalr): node( _type, _value) R(optionalr)){}
		uint_t evaluate();
}
/*class nodeession_postfix_expression {
	protected:
	exp_node *exp;
	public:
	assignment_stmt(string name, exp_node *expression);
	void print();
	void evaluate();
}
*/
class argument_expr_list{
	protected:
	 list<assignment_expr*> *args;
	public:
	 argument_expr_list(list<assignment_expr*> *stmtlist);
 }

class unary_expr{

}

class shift_expr{

}

class cast_expr{

}


//---------------- boolean expr

class relational_expr: public binary_expr{
	public:
		relational_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr(_type, _value, lval,rval) {}
}
class EQ_expr: public binary_expr{
	public:
		EQ_expr(std::string _type, std::string _value, node *lval, node *rval): relational_expr(_type, _value, lval, rval){}
}
class NEQ_expr: public binary_expr{
	public:
		NEQ_expr(std::string _type, std::string _value, node *lval, node *rval): relational_expr(_type, _value), L(lval), R(rval) {}
}

class equality_expr{
	public:
		equality_expr(std::string _type, std::string _value, node *lval, node *rval): binary_expr(_type, _value, lval,rval){}
}

class and_expr{

}

class exclusive_or_expr{}

class inclusive_or_expr{}

class logical_and_expr{}

class logical_or_expr{}

class conditional_expr{}
/*
assignment_expression

assignment_operator

expression

constant_expression
*/
/*
declaration

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


parameter_type_list

parameter_list

parameter_declaration

identifier_list

type_name

abstract_declarator

direct_abstract_declarator

initializer

initializer_list

statement

labeled_statement

compound_statement

declaration_list

statement_list

expression_statement

selection_statement


iteration_statement

jump_statement

translation_unit


external_declaration

function_definition
*/
//----------------

extern const Expression *parseAST();

#endif
