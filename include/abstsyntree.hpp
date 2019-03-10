#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include abstsyntree_compile

typedef std::shared_ptr<node> nodePtr;
extern const std::map<std::string,double> &symtab;//check

class node {
	/*
	protected:
		std::string type;
		std::string value;
		std::vector<nodePtr> branches;
	public:
		node(std::string _type, std::string _value, const std::vector<TreePtr> &_branches): type(_type), value(_value), branches(_branches){}
		node(std::string _type, std::string _value): type(_type), value(_value){}

		template<class ...TArgs>//?
		node(std::string _type, TArgs ...args): type(_type), branches{args...}{}//?
		*/
		virtual uint_t interpret() = 0;
		virtual uint_t compile() = 0;
}

//---------------- base nodes
class primary_expr: public node{
	//functions
	//virtual void print() = 0;

}
class binary_expr: public primary_expr {
  protected:
    node *L;
    node *R;
  public:
    binary_expr(node *lval, node *rval): L(lval), R(rval) {}
}
//----------------


class identifier: public primary_expr {
	protected:
		std::string id;
	public:
		identifier(const std::string &_id) {
      id = _id;
    }
}
class const_: public primary_expr{//number, can be int_const or float_const or... etc?
	protected:
		double value;
	public:
		const(double _value) {
			value = _value;
	}
}
class str_lit: public primary_expr{
	protected:
		std::string str;
	public:
		str_lit(const std::string &_str) {
			str = _str;
	}
}

//---------------- arith expr
class additive_expr: public binary_expr{}

class plus_expr: public additive_expr{
	public:
		plus_expr(node *lval, node *rval): binary_expr(lval, lval) {}
}
class minus_expr: public additive_expr{
  public:
    div_expr(node *lval, node *rval): binary_expr(lval, lval) {}
}

class multiplicative_expr: public binary_expr{}

class times_expr: public multiplicative_expr{
	public:
		times_expr(node *lval, node *rval): binary_expr(lval, lval) {}
}
class div_expr: public multiplicative_expr{
  public:
    div_expr(node *lval, node *rval): binary_expr(lval, lval) {}
}
//-----------------------
class postfix_expr{}
/*class primary_expression_postfix_expression {
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

class unary_expr{}

class cast_expr{}

class cast_expr{}}



shift_expr

cast_expr

//---------------- boolean expr

class relational_expr: public binary_expr{
	
}

equality_expr

and_expr

exclusive_or_expression

inclusive_or_expression

logical_and_expression

logical_or_expression

conditional_expression

//----------------

void Translate(

);
void Compile(
    TreePtr program
);

extern const Expression *parseAST();

#endif
