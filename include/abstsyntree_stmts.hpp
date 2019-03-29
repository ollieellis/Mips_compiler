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
		std::vector<nodePtr> v;
		stmt_list(nodePtr in){ push(in);}
		void push(nodePtr in){ v.push_back(in); };
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"stmt_list"<<std::endl;};
};
class while_stmt: public node{
	public:
		nodePtr body;
		nodePtr condition;
		while_stmt(nodePtr fact, nodePtr body): condition(fact), body(body) {};
		virtual void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"while"<<std::endl;};
};
class do_stmt: public node{
	protected:
		nodePtr task;
		nodePtr condition;
	public:
		do_stmt(nodePtr fact, nodePtr body): task(body),condition(fact){};
		//virtual void translate(int& tc);
		//void compile(translate_context &context);
		void print(){std::cerr<<"do"<<std::endl;};
};
class ifelse_stmt: public node{
	protected:
		nodePtr body;
		nodePtr condition;
		nodePtr else_body;
	public:
		ifelse_stmt(nodePtr c, nodePtr b, nodePtr eb): condition(c), body(b), else_body(eb) {};//body - then
		void translate(int& tc);
		//void compile(translate_context &context);
		void print(){std::cerr<<"ifelse"<<std::endl;};
};
class for_stmt: public node{
	public:
		nodePtr start;
		nodePtr end;
		nodePtr alter;
		nodePtr task;
		for_stmt(nodePtr s, nodePtr e,nodePtr t,nodePtr a): start(s),end(e), task(t),alter(a), node() {};
		//void translate(int& tc);
		//void compile(translate_context &context);
		void print(){std::cerr<<"for"<<std::endl;};
};
class switch_stmt: public node{
	nodePtr task;
	nodePtr extra;
	public:
		switch_stmt(nodePtr e, nodePtr t): task(t), extra(t) {};
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"switch"<<std::endl;};
};
class jump_stmt: public node{
	public:
		std::string what;
		nodePtr body;
		jump_stmt(std::string type, nodePtr b): what(type), body(b){};
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"jump"<<std::endl;};
};
class iter_stmt: public node{
	std::string what;
	nodePtr body;
	public:
		//check
		void translate(int& tc);
		//void compile(translate_context &context);
		void print(){std::cerr<<"iter"<<std::endl;};
};
class comp_stmt: public node{
	nodePtr extra;
	nodePtr body;
	public:
		comp_stmt(nodePtr b, nodePtr e): extra(e), body(b){};
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"comp_s"<<std::endl;};
};
class expr_stmt: public node{
	public:
		nodePtr E;
		expr_stmt(nodePtr in): E(in){}
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"expr_list"<<std::endl;};
};
class label_stmt: public node{
	public:
		std::string label;
		nodePtr fact;
		nodePtr option;
		label_stmt(std::string l, nodePtr f, nodePtr o): label(l), fact(f), option(o){};
		void translate(int& tc);
		void compile(translate_context &context);
		void print(){std::cerr<<"label_s"<<std::endl;};
};
//----------------
#endif
