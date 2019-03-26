#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include "abstsyntree.hpp"
#include <string>
#include <vector>
//static int makeNameUnq=0;
//use r1 and r2 names each time
//nodes need functions in translate and compile
void  constant::compile(translate_context& context){//ostream printing?

	std::cout<<"li      "<<", "<<value;
}
void identifier::compile(translate_context& context){
	if(context.is_label){
  	std::cout<<value;
	}
	else{
		//get variable offset
		std::vector<std::string> vattributes;
	}
}
void str_lit::compile(translate_context& context){
  std::cout<<value;
}
void stmt_list::compile(translate_context& context){
	std::cerr<<"stmtlist"<<std::endl;
	for(int i=0; i<v.size();i++){
	 if(v[i]!=NULL){
		(v[i])->compile(context);;
	 }
	 std::cout<<std::endl;
	}
}
void binary_expr::compile(translate_context& context){
	L->compile(context);
	R->compile(context);

 if(op=="+"){
	 std::cout<<"lw      "<<std::endl;//$3,8($fp)
	 std::cout<<"lw      "<<std::endl;//$2,8($fp)
	 std::cout<<"nop     "<<std::endl;
	 std::cout<<"addu    "<<std::endl;

 }
 if(op=="-"){
	 std::cout<<"lw      "<<std::endl;
	 std::cout<<"lw      "<<std::endl;
	 std::cout<<"nop     "<<std::endl;
	 std::cout<<"addu    "<<std::endl;
 }
 if(op=="*"){

 }
 if(op=="/"){

 }
 /*
 if(op==std::string(1, %)){//check

 }
 */
 if(op=="|"){

 }
 if(op=="^"){

 }
 if(op=="||"){

 }
 if(op=="=="){
	 if(context.get_condition){
		 context.condition="beq";
	 }
 }
 if(op=="!="){
	if(context.get_condition){
		context.condition="bne";
	}
 }
 if(op=="&"){

 }
 if(op=="^"){

 }
 if(op==">"){

 }
 if(op=="<="){
	 context.condition="ble";

 }
 if(op==">="){
	 	 context.condition="bge";
 }
 if(op=="!="){

 }
 if(op=="&&"){

 }
 if(op=="<<"){

 }
 if(op==">>"){

 }
}
void seperator_expr::compile(translate_context &context){

}
void incr::compile(translate_context &context){

}
void decr::compile(translate_context &context){

}
void unary_op::compile(translate_context &context){

}
void unary_expr::compile(translate_context &context){

}
void jump_stmt::compile(translate_context &context){
		body->compile(context);
}
void while_stmt::compile(translate_context &context){
	int current_ln = context.label_no;//current label number
	context.label_no = context.label_no+1;
	std::cout<<"$L"<<current_ln<<":";

	//find branch condition
	context.get_condition=true;
	std::cout<<"lw ";//get free reg
	condition->compile(context);std::cout<<","<<"right variable offset"<<"($30)"<<std::endl;
	body->compile(context);std::cout<<"($30)"<<std::endl;
	std::cout<<"b       $L"<<current_ln<<std::endl;
	std::cout<<"nop"<<std::endl;
}
void type_qual::compile(translate_context& context){


}
void array::compile(translate_context& context){

}
void member::compile(translate_context& context){

}
void ideclarator::compile(translate_context& context){

}
void function_name::compile(translate_context& context){

}
void param_decl::compile(translate_context& context){

}
void type_name::compile(translate_context& context){

}
//statements------------------
void comp_stmt::compile(translate_context& context){
	std::cerr<<"compstmt"<<std::endl;
	if(body!=NULL){
		std::cerr<<"comp_body: ";
		body->compile(context);
	}
	if(extra!=NULL){
		context.current_scope_index++;
		std::cerr<<"comp_extra: "<<std::endl;
		extra->compile(context);
		context.current_scope_index--;
	}
	std::cout<<std::endl;
}

void label_stmt::compile(translate_context& context){

}
void switch_stmt::compile(translate_context& context){

}
void decl_specs::compile(translate_context& context){

}
void decl_list::compile(translate_context& context){

}
void init_decl_list::compile(translate_context& context){

}
void p_declarator::compile(translate_context& context){

}
void declarator::compile(translate_context& context){

}
void d_declarator::compile(translate_context& context){
	if(dd!=NULL){
		dd->compile(context);
	}
	if(args!=NULL){
		args->compile(context);
	}
}
void init_decl::compile(translate_context& context){

}
void external_dec::compile(translate_context& context){

}
void translation_unit::compile(translate_context& context){

}
void function_definition::compile(translate_context &context){
	std::cerr<<"funcdef"<<std::endl;
	if(name!=NULL){
		context.is_label=true;
		name->compile(context);
	}

	std::cout<<":"<<std::endl;


	if(params!=NULL){
		params->compile(context);
	}
	std::cout<<"\taddiu   $sp,$sp,-"<<8<<std::endl;
	std::cout<<"\tsw      $fp,4($sp)"<<std::endl;
	std::cout<<"\tmove    $fp,$sp"<<std::endl;

	/*
	std::cout<<"\tsw      $4,8($fp)"<<std::endl;
	std::cout<<"\tsw      $5,12($fp)"<<std::endl;
	std::cout<<"\tsw      $6,16($fp)"<<std::endl;
	*/
	if(body!=NULL){
			body->compile(context);
	}
	std::cout<<"j $31"<<std::endl;
	std::cout<<"nop";
}
void GetTempReg(int& r){
	r++;
	if(r>29){
		std::exit(-1);
	}
}
void ReplaceTempReg(int& r){
	if(r){
		std::exit(-1);
	}
}
void GetSavedReg(int& r){
	r++;
	if(r>29){
		std::exit(-1);
	}
}
void ReplaceSavedReg(int& r){
	if(r){
		std::exit(-1);
	}
}
