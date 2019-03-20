#include "abstsyntree.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include <string>
#include <vector>
std::vector<std::string> global_var;

void constant::translate(translate_context &context){//ostream printing?
  std::cout<<value;
}
void identifier::translate(translate_context &context){
  std::cout<<value;
}
void str_lit::translate(translate_context &context){
  std::cout<<value;
}
//binary
//arithmetic
void plus_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<" + ";
	R->translate(context);
}
void minus_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<" - ";
	R->translate(context);
}
void times_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"*";
	R->translate(context);
}
void div_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"/";
	R->translate(context);
}
void mod_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<'%';
	R->translate(context);
}
void isequal_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"==";
	R->translate(context);
}
void notequal_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"!=";
	R->translate(context);
}
void member::translate(translate_context &context){
	S->translate(context);
	std::cout<<"."<<membval;
}
void lshift::translate(translate_context &context){
	L->translate(context);
	std::cout<<">>";
	R->translate(context);
}
void rshift::translate(translate_context &context){
	L->translate(context);
	std::cout<<"<<";
	R->translate(context);
}
//unary
//postfix
void increment::translate(translate_context &context){
	std::cout<<"++";
	S->translate(context);
}
void decrement::translate(translate_context &context){
	std::cout<<"--";
	S->translate(context);
}
void function_definition::translate(translate_context &context){
	std::cout<<"def ";
	name->translate(context);
	std::cout<<"(";
	args->translate(context);
	std::cout<<"):"<<std::endl;
	d_body->translate(context);
}
void ifelse_stmt::translate(translate_context &context){
	std::cout<<"if ";
	std::cout<<"(";
	condition->translate(context);
	std::cout<<"):"<<std::endl;
	body->translate(context);
	if(else_body!=NULL){
		else_body->translate(context);
	}
}
void while_stmt::translate(translate_context &context){
	std::cout<<"while ";
	std::cout<<"(";
	condition->translate(context);
	std::cout<<"):"<<std::endl;
	body->translate(context);
}
void return_stmt::translate(translate_context &context){
	std::cout<<"return ";
	body->translate(context);
}
void translate(nodePtr program, translate_context &context){
	program->translate(context);
}
