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
		nodePtr next;
		std::vector<nodePtr> stmts;
	public:
		stmt_node();
		stmt_node(nodePtr in) {stmts.push_back(in);};
		virtual void translate(translate_context &context) = 0;
		virtual void compile(translate_context &context) = 0;
};

//statements---------------------------------------------------
//statements---------------------------------------------------
class while_stmt: public stmt_node{
	protected:
		nodePtr body;
		nodePtr condition;
	public:
		while_stmt(nodePtr fact, nodePtr body): condition(fact), stmt_node(body) {};
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
	public:

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
		nodePtr label;
		std::string what;
		nodePtr fact;
		label_stmt(nodePtr l, std::string type, nodePtr f, nodePtr option): label(l), what(type), fact(f), stmt_node(option){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};
//----------------
#endif
