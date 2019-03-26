#ifndef abstsyntree_hpp
#define abstsyntree_hpp

#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <memory>
#include <list>

//have removed all struct and union, and enum from parser

class translate_context{//just use unchangeable registers pluse two
	public:
    std::vector<int32_t> params;
    std::unordered_map< int, std::unordered_map< std::string, std::vector<int> > > symtab;
		//symtab outer map key = scope
		//symtab inner map key = scope
		//inner vectorindex/ 0:scope_no 1: storage offset
		bool is_label;
		int label_no;
		bool get_condition;
		int current_offset;
		int para_no;
		std::vector<int> current_scope;
		int current_scope_index;
		std::string condition;
		int reg_no;
		int r_reg_no;//return
		int t_reg_no;//temp
		int s_reg_no;//saved
		int a_reg_no;//arg

		bool get_returnval;
		int returnval;
};

class node;
typedef node* nodePtr;//if sharered don't do cyclical references
// nodePtr Parse(std::istream &src);

class node{
	public:
	 	nodePtr parseAST(FILE* src);
		virtual void translate(int& tc){}
		virtual void compile(translate_context &context){}
		virtual void push(nodePtr in){}
		virtual void push(std::string* in){}
		virtual void print(){}
};


//basic units----------------
class identifier: public node{
	protected:
		std::string value;
	public:
		identifier(std::string _value): value(_value) {};
		void translate(int& tc);
		void compile(translate_context &context);
};
class constant: public node{//number, can be int_const or float_const or... etc?
	protected:
		double value;
	public:
		constant(double _value): value(_value){};
		void translate(int& tc);
		void compile(translate_context &context);
};
class str_lit: public node{
	protected:
		std::string value;
	public:
		str_lit(std::string _value): value(_value) {};
		void translate(int& tc);
		void compile(translate_context &context);
};

extern const nodePtr parseAST(FILE* src);

#endif
