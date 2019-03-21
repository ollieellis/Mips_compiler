#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
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
void incr::translate(translate_context &context){
	std::cout<<"++";
	subject->translate(context);
}
void decr::translate(translate_context &context){
	std::cout<<"--";
	subject->translate(context);
}
void function_definition::translate(translate_context &context){
	std::cout<<"def ";
	if(name!=NULL){
		name->translate(context);
	}
	std::cout<<"(";
	if(params!=NULL){
		params->translate(context);
	}
	std::cout<<"):"<<std::endl;
	if(body!=NULL){
		body->translate(context);
	}
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
void cond_expr::translate(translate_context &context){

}

void assign_expr::translate(translate_context &context){

}
void unary_op::translate(translate_context &context){

}
void assign_op::translate(translate_context &context){

}
void and_expr::translate(translate_context &context){

}
void lt::translate(translate_context &context){

}
void gt::translate(translate_context &context){

}
void gte::translate(translate_context &context){

}
void lte::translate(translate_context &context){

}
void xor_expr::translate(translate_context &context){

}
void or_expr::translate(translate_context &context){

}
void stmt_node::translate(translate_context &context){

}
void label_stmt::translate(translate_context &context){

}
void translate(nodePtr program, translate_context &context){
	program->translate(context);
}
