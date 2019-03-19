#ifndef abstsyntree_stmts_hpp
#define abstsyntree_stmts_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>

//statements---------------------------------------------------
class while_stmt: public stmt_node{
	protected:
		nodePtr condition;
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


#endif
