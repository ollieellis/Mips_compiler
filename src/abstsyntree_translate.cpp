#include "abstsyntree.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
std::vector<nodePtr> global_var;
void const_::translate(translate_context &context, nodePtr program){//ostream printing?
  std::cout<<value<<";";
}
void identifier::translate(translate_context &context, nodePtr program){
    std::cout<<context->symtab[id];
}
void str_lit::translate(translate_context &context, nodePtr program){
  std::cout<<value<<";";
}
void identifier::translate(translate_context &context, nodePtr program){
  std::cout<<id<<";";
}
//arithmetic
void plus_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<" + "<<;
	R->translate();
}
void minus_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<" - "<<;
	R->translate();
}
void times_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<"*"<<;
	R->translate();
}
void div_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<"/"<<;
	R->translate();
}

void div_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<"/"<<;
	R->translate();
}

void function_definition::translate(translate_context &context, nodePtr program){
	std::cout<<"def ";
	std::cout<<translate()->name:
	std::cout<<"(";
	std::cout<<translate()->args:
	std::cout<<"):";
	translate()->body;
}

void translate(nodePtr program, translation_context &context){
	program->translate();
}
