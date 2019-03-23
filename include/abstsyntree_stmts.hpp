#ifndef abstsyntree_stmts_hpp
#define abstsyntree_stmts_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include "abstsyntree.hpp"

//statements---------------------------------------------------
class stmt_list: public node{
public:
	std::vector<nodePtr> stmts;
	stmt_list(nodePtr in): node(in){}
	void translate(translate_context &context);
	void compile(translate_context &context);
};
class while_stmt: public node{
	public:
		nodePtr body;
		nodePtr condition;
		while_stmt(nodePtr fact, nodePtr body): condition(fact), body(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class do_stmt: public node{
	protected:
		nodePtr task;
		nodePtr condition;
	public:
		do_stmt(nodePtr fact, nodePtr body): task(body),condition(fact){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class ifelse_stmt: public node{
	protected:
		nodePtr body;
		nodePtr condition;
		nodePtr else_body;
	public:
		ifelse_stmt(nodePtr c, nodePtr b, nodePtr eb): condition(c), body(b), else_body(eb) {};//body - then
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class for_stmt: public node{
	public:
		nodePtr start;
		nodePtr end;
		nodePtr alter;
		nodePtr task;
		for_stmt(nodePtr s, nodePtr e,nodePtr t,nodePtr a): start(s),end(e), task(t),alter(a), node() {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class switch_stmt: public node{
	nodePtr task;
	public:
		switch_stmt(nodePtr e, nodePtr t): node(e), task(t) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class return_stmt: public node{
	public:
		nodePtr body;
		return_stmt(nodePtr body): node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class jump_stmt: public node{
	public:
		std::string what;
		nodePtr body;
		jump_stmt(std::string type, nodePtr body): what(type), node(body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class iter_stmt: public node{
	std::string what;
	nodePtr body;
	public:
		//check
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class comp_stmt: public node{
	nodePtr extra;
	nodePtr body;
	public:
		comp_stmt(nodePtr b, nodePtr e): extra(e), body(body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class expr_stmt: public node{
	public:
		std::string what;
		nodePtr fact;
		nodePtr task;
		expr_stmt(std::string type, nodePtr f, nodePtr t): what(type), fact(f), task(t){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class label_stmt: public node{
	public:
		std::string label;
		nodePtr fact;
		nodePtr option;
		label_stmt(std::string l, nodePtr f, nodePtr o): label(l), fact(f), option(o){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
//----------------
#endif
