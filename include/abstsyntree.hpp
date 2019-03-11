#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include abstsyntree_compile

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
		virtual uint_t translate() = 0;
		virtual uint_t compile() = 0;
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
    binary_expr(node *lval, node *rval): L(lval), R(rval) {}
}
//----------------


class identifier: public node {
	public:
		identifier(const std::string &_id) {
      id = _id;
    }
}
class const_: public node{//number, can be int_const or float_const or... etc?
	protected:
	public:

}
class str_lit: public node{
	protected:

	public:
		str_lit(node *lval, node *rval): node(lval, rval) {}
}

//---------------- arith expr
class additive_expr: public binary_expr{}

class plus_expr: public additive_expr{
	public:
		plus_expr(node *lval, node *rval): binary_expr(lval, lval) {}
		uint_t evaluate();
}
class minus_expr: public additive_expr{
  public:
    div_expr(node *lval, node *rval): binary_expr(lval, lval) {}
}

class multi_expr: public binary_expr{
public:
	div_expr(node *lval, node *rval): multi_expr(lval, lval) {}
}

class times_expr: public multi_expr{
	public:
		times_expr(node *lval, node *rval): multi_expr(lval, lval) {}
}
class div_expr: public multi_expr{
  public:
    div_expr(node *lval, node *rval): multi_expr(lval, lval) {}
}
//-----------------------
class postfix_expr{


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

}

class equality_expr

class and_expr

class exclusive_or_expr

class inclusive_or_expr

class logical_and_expr

class logical_or_expr

class conditional_expr

//----------------

extern const Expression *parseAST();

#endif
