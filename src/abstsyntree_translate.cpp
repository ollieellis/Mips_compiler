#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include <string>
#include <vector>
std::vector<std::string> global_var;

void constant::translate(){//ostream printing?
  std::cout<<value;
}
void identifier::translate(){
  std::cout<<value;
}
void str_lit::translate(){
  std::cout<<value;
}

//binary
//arithmetic

void seperator_expr::translate(){
	L->translate();
	std::cout<<",";
	R->translate();
}
//unary
//postfix
void incr::translate(){
	std::cout<<"++";
	S->translate();
}
void decr::translate(){
	std::cout<<"--";
	S->translate();
}

void cond_expr::translate(){
	 condition->translate();
	 option1->translate();
	 option2->translate();
}

void unary_op::translate(){
	std::cout<<op;
}
void binary_expr::translate(){
	L->translate();
	std::cout<<op;
	R->translate();
}
void type_qual::translate(){
	std::cerr<<"qual"<<std::endl;
	std::cout<<qual;
}
void array::translate(){

};
void member::translate(){

};

void function_name::translate(){
	if(name!=NULL){
		name->translate();
	}
	if(args!=NULL){
		args->translate();
	}
}
void param_decl::translate(){

}
void type_name::translate(){
std::cerr<<"typename"<<std::endl;
}
//statements------------------
void comp_stmt::translate(){
	std::cerr<<"comp: ";
	if(body!=NULL){
		std::cerr<<"comp_body: ";
		body->translate();
	}
	if(extra!=NULL){
		std::cerr<<"comp_extra: ";
		extra->translate();
	}
}
void do_stmt::translate(){
	std::cout<<"do: ";
	task->translate();
	condition->translate();
}
void label_stmt::translate(){
	std::cerr<<"label"<<std::endl;
	std::cout<<label;
}
void jump_stmt::translate(){
	std::cout<<"    "<<what<<" ";
	if(body!=NULL){

		body->translate();
	}

}
void unary_expr::translate(){}


void size_of::translate(){
	std::cout<<"sizeof(";
}

void dir_abst_declarator::translate(){
	if(name!=NULL){
		name->translate();
	}
	std::cout<<lb;
	if(args!=NULL){
		args->translate();
	}
	std::cout<<rb;
}
void switch_stmt::translate(){
	//std::cout<<what;
	task->translate();
}

void stmt_list::translate(){
		std::cerr<<"stmtl: ";
	for(int i=0; i<v.size();i++){
	 if(v[i]!=NULL){
		 std::cerr<<"stmtl vec: ";
		(v[i])->translate();
	 }
	}
}
void expr_list::translate(){
	for(int i=0;i<v.size();i++){
		(v[i])->translate();
	}
}
void string_list::translate(){
	for(int i=0;i<v.size();i++){
		std::cout<<*(v[i]);
	}
}
void d_declarator::translate(){
	if(dd!=NULL){
		dd->translate();
	}
	std::cout<<lb;

	if(args!=NULL){
		args->translate();
	}
	std::cout<<rb;
}
void para_t_list::translate(){

}
void cast_expr::translate(){
	if(L!=NULL){
		L->translate();
	}
	std::cout<<"(";
	if(R!=NULL){
		R->translate();
	}
	std::cout<<")";
}
void init_list::translate(){

}
void init::translate(){

}
void ifelse_stmt::translate(){
	std::cout<<"if ";
	std::cout<<"(";
	condition->translate();
	std::cout<<"):"<<std::endl;
	body->translate();
	if(else_body!=NULL){
		else_body->translate();
	}
}
void while_stmt::translate(){
	std::cout<<"while ";
	std::cout<<"(";
	condition->translate();
	std::cout<<"):"<<std::endl;
	body->translate();
}
void for_stmt::translate(){
	std::cout<<"for ";
	start->translate();
	end->translate();

	if(end!=NULL){
		alter->translate();
	}
	task->translate();
}

//---------declarations
void function_definition::translate(){
	std::cout<<"def ";
	if(name!=NULL){
		name->translate();
	}

	if(params!=NULL){
		params->translate();
	}
	std::cout<<":"<<std::endl;
	if(body!=NULL){
		std::cerr<<"body"<<std::endl;
		body->translate();
		std::cout<<std::endl;
		std::cout<<std::endl;
	}
}
/*
void struct_decl::translate(){

};
void struct_decl_list::translate(){

};
*/
void decl_list::translate(){
	for(int i=0;i<v.size();i++){
		v[i]->translate();
	}
};
void p_declarator::translate(){
	std::cout<<"->";
}
