#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>

typedef std::shared_ptr<node> nodePtr;
const std::map<std::string,double> &symtab;

class node {
	protected:
		std::string type;
		std::string value;
		std::vector<nodePtr> branches;
	public:
		node(std::string _type, std::string _value, const std::vector<TreePtr> &_branches): type(_type), value(_value), branches(_branches){}
		node(std::string _type, std::string _value): type(_type), value(_value){}

		template<class ...TArgs>//?
		node(std::string _type, TArgs ...args): type(_type), branches{args...}{}//?
}

//----------------
class primary_expr: public node{}

class identifier: public primary_expr {
	protected:
		std::string id;
	public:
		identifier(const std::string &_id) {
      id = _id;
    }
}
class const: public primary_expr{//number, can be int_const or float_const or... etc?
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
//----------------

class arith_expr: public primary_expr {
  protected:
    node *L;
    node *R;
  public:
    arith_expr(node *lval, node *rval): L(lval), R(rval) {}
}
class plus_expr: public arith_expr {
	public:
		plus_expr(node *lval, node *lval): arith_expr(lval, lval) {}
}
class minus_expr: public arith_expr {
  public:
    div_expr(node *lval, node *lval): arith_expr(lval, lval) {}
}
class times_expr: public arith_expr {
	public:
		times_expr(node *lval, node *lval): arith_expr(lval, lval) {}
}
class div_expr: public arith_expr {
  public:
    div_expr(node *lval, node *lval): arith_expr(lval, lval) {}
}

class postfix_expression {}

class argument_expression_list {}

class unary_expression {}


unary_operator
void Translate(

);
void Compile(
    TreePtr program
);

extern const Expression *parseAST();

#endif
