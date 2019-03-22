#ifndef abstsyntree_stmts_hpp
#define abstsyntree_stmts_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>
#include "abstsyntree.hpp"

class stmt_node: public node{
	protected:
		std::vector<nodePtr> stmts;
	public:
		stmt_node(){};
		stmt_node(nodePtr in){stmts.push_back(in);};
		virtual void translate(translate_context &context) = 0;
		virtual void compile(translate_context &context) = 0;
};

//statements---------------------------------------------------
class stmt_list: public stmt_node{
public:
	stmt_list(nodePtr in): stmt_node(in){}
	virtual void translate(translate_context &context);
	virtual void compile(translate_context &context);
};
class while_stmt: public stmt_node{
	protected:
		nodePtr body;
		nodePtr condition;
	public:
		while_stmt(nodePtr fact, nodePtr body): condition(fact), stmt_node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class do_stmt: public stmt_node{
	protected:
		nodePtr task;
		nodePtr condition;
	public:
		do_stmt(nodePtr fact, nodePtr body): task(body),condition(fact), stmt_node() {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class ifelse_stmt: public stmt_node{
	protected:
		nodePtr body;
		nodePtr condition;
		nodePtr else_body;
	public:
		ifelse_stmt(nodePtr fact, nodePtr body, nodePtr other): condition(fact), else_body(other), stmt_node(body) {};//body - then
		ifelse_stmt(nodePtr fact, nodePtr body): condition(fact), stmt_node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class for_stmt: public stmt_node{
	protected:
		nodePtr start;
		nodePtr end;
		nodePtr alter;
		nodePtr task;
	public:
		for_stmt(nodePtr s, nodePtr e,nodePtr t,nodePtr a): start(s),end(e), task(t),alter(a), stmt_node() {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class switch_stmt: public stmt_node{
	nodePtr task;
public:
	switch_stmt(nodePtr e, nodePtr t): stmt_node(e), task(t) {};//body - then
	virtual void translate(translate_context &context);
	virtual void compile(translate_context &context);
};
class return_stmt: public stmt_node{
	public:
		nodePtr body;
		return_stmt(nodePtr body): stmt_node(body) {};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class jump_stmt: public stmt_node{
	public:
		std::string what;
		nodePtr body;
		jump_stmt(std::string type, nodePtr body): what(type), stmt_node(body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class iter_stmt: public stmt_node{
	std::string what;
	nodePtr body;
	public:
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class comp_stmt: public stmt_node{
	nodePtr extra;
	nodePtr body;
	public:
		comp_stmt(nodePtr b, nodePtr e): extra(e), body(body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class expr_stmt: public stmt_node{
	public:
		std::string what;
		nodePtr fact;
		nodePtr task;
		expr_stmt(std::string type, nodePtr f, nodePtr t): what(type), fact(f), task(t){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
class label_stmt: public stmt_node{
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
