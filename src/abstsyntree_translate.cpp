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
void seperator_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<",";
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

void cond_expr::translate(translate_context &context){
	 condition->translate(context);
	 option1->translate(context);
	 option2->translate(context);
}

void assign_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"=";
	R->translate(context);
}
void unary_op::translate(translate_context &context){
	std::cout<<op;
}
void assign_op::translate(translate_context &context){
	std::cout<<op;
}
void and_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"&";
	R->translate(context);
}
void bwand_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"&";
	R->translate(context);
}
void lt::translate(translate_context &context){
	L->translate(context);
	std::cout<<"<";
	R->translate(context);
}
void gt::translate(translate_context &context){
	L->translate(context);
	std::cout<<">";
	R->translate(context);
}
void gte::translate(translate_context &context){
	L->translate(context);
	std::cout<<"=>";
	R->translate(context);
}
void lte::translate(translate_context &context){
	L->translate(context);
	std::cout<<"=<";
	R->translate(context);
}
void bwxor_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"^";
	R->translate(context);
}
void bwor_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"|";
	R->translate(context);
}
void or_expr::translate(translate_context &context){
	L->translate(context);
	std::cout<<"or";
	R->translate(context);
}
void type_qual::translate(translate_context &context){
	std::cout<<qual;
}
void array::translate(translate_context &context){

};
void member::translate(translate_context &context){

};
void enum_spec::translate(translate_context &context){

};
void function_name::translate(translate_context &context){
	L->translate(context);
	R->translate(context);
}
//statements------------------
void comp_stmt::translate(translate_context &context){
	body->translate(context);
	if(extra!=NULL){
		extra->translate(context);
	}
}
void do_stmt::translate(translate_context &context){
	std::cout<<"do: ";
	task->translate(context);
	condition->translate(context);
}
void label_stmt::translate(translate_context &context){
	std::cout<<label;
}
void jump_stmt::translate(translate_context &context){
	std::cout<<what;
	body->translate(context);
}
void switch_stmt::translate(translate_context &context){
	//std::cout<<what;
	task->translate(context);
}
void stmt_list::translate(translate_context &context){
	for(int i=0;i++; i<stmts.size()){
		(stmts[i])->translate(context);
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
void for_stmt::translate(translate_context &context){
	std::cout<<"for ";
	start->translate(context);
	end->translate(context);

	if(end!=NULL){
		alter->translate(context);
	}
	task->translate(context);
}

//---------declarations
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
	/*if(body!=NULL){
		body->translate(context);
	}*/
}
void struct_decl::translate(translate_context &context){

};
void struct_decl_list::translate(translate_context &context){

};
void decl_list::translate(translate_context &context){
	for(int i=0;i<decls.size();i++){
		decls[i]->translate(context);
	}
};
void p_declarator::translate(translate_context &context){

	std::cout<<"->";
}
void transl_unit::translate(translate_context &context){
	for(int i=0;i<decls.size();i++){
		decls[i]->translate(context);
	}
}
