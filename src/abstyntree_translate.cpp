#include "abstsyntree.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
std::vector<nodePtr> global_var;

void const_::translate(translate_context &context, nodePtr program){//ostream printing?
  std::cout<<value;
}
void identifier::translate(translate_context &context, nodePtr program){
    std::cout<<context->symtab[id];
}
void str_lit::translate(translate_context &context, nodePtr program){
  std::cout<<value;
}
void identifier::translate(translate_context &context, nodePtr program){
  std::cout<<id;
}
//arithmetic
void plus_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<" + ";
	R->translate();
}
void minus_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<" - ";
	R->translate();
}
void times_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<"*";
	R->translate();
}
void div_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<"/";
	R->translate();
}

void div_expr::translate(translate_context &context, nodePtr program){
	L->translate();
	std::cout<<"/";
	R->translate();
}

void function_definition::translate(translate_context &context, nodePtr program){
	std::cout<<"def ";
	std::cout<<name->translate();
	std::cout<<"(";
	std::cout<<args->translate();
	std::cout<<"):"<<std::endl;
	body->translate();
}

void ifelse_stmt::translate(translate_context &context, nodePtr program){
	std::cout<<"if ";
	std::cout<<name->translate();
	std::cout<<"(";
	std::cout<<args->translate();
	std::cout<<"):"<<std::endl;
	for(int i=0;i++;i<body.size()){
		translate()->body(i);
	}
	if(else_body.size()!=0){
		std::cout<<"if ";
		for(int i=0;i++;i<body.size()){
			translate()->else_body(i);
		}
	}
}
void while_stmt::translate(translate_context &context, nodePtr program){
	std::cout<<"while ";
	std::cout<<"(";
	for(int i=0;i++;i<body.size()){
		std::cout<<condition->translate():
		std::cout<<"):"<<std::endl;
		body->translate();
	}
}
void return_stmt::translate(translate_context &context, nodePtr program){
	std::cout<<"return ";
	body->translate();
}
void translate(nodePtr program, translate_context &context){
	program->translate();
}
