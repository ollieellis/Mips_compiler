#include "abstsyntree.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include <string>
#include <vector>
std::vector<std::string> global_var;

void constant::translate(translate_context &context){//ostream printing?
  std::cout<<value;
}
void identifier::translate(translate_context &context){
    std::cout<<context.symtab[value];
}
void str_lit::translate(translate_context &context){
  std::cout<<value;
}
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

void function_definition::translate(translate_context &context){
	std::cout<<"def ";
	std::cout<<name;
	std::cout<<"(";
	for(int i=0;i++;i<d_body.size()){
		args[i]->translate(context);
	}
	std::cout<<"):"<<std::endl;
	for(int i=0;i++;i<d_body.size()){
		d_body[i]->translate(context);
	}
}

void ifelse_stmt::translate(translate_context &context){
	std::cout<<"if ";

	std::cout<<"(";
	condition->translate(context);
	std::cout<<"):"<<std::endl;
	for(int i=0;i++;i<stmts.size()){
		stmts[i]->translate(context);
	}
	if(else_body.size()!=0){
		std::cout<<"else: ";
		for(int i=0;i++;i<else_body.size()){
			else_body[i]->translate(context);
		}
	}
}
void while_stmt::translate(translate_context &context){
	std::cout<<"while ";
	std::cout<<"(";
	condition->translate(context);
	std::cout<<"):"<<std::endl;
	for(int i=0;i++;i<stmts.size()){
		stmts[i]->translate(context);
	}
}
void return_stmt::translate(translate_context &context){
	std::cout<<"return ";
	for(int i=0;i++;i<stmts.size()){
		stmts[i]->translate(context);
	}

}
void translate(nodePtr program, translate_context &context){
	program->translate(context);
}
