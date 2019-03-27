#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include "abstsyntree.hpp"
#include <string>
#include <vector>

void GetTempReg(int& r);
void ReplaceTempReg(int& r);
//static int makeNameUnq=0;
//use r1 and r2 names each time
//nodes need functions in translate and compile
void  constant::compile(translate_context& context){//ostream printing?
	std::cout<<"li      "<<context.t_reg_no<<", "<<value;
}
void identifier::compile(translate_context& context){
	if(context.is_label){
  	std::cout<<value;
	}
	else if(value=="return"){
		context.get_returnval=true;
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
	std::cout<<"\tnop     "<<std::endl;

 if(op=="+"){//addu or addiu?
	 std::cout<<"\taddu    "<<context.t_reg_no<<" "<<context.t_reg_no<<std::endl;
	  std::cout<<"\tsw      $2,24($fp)"<<" "<<context.t_reg_no<<std::endl;
 }
 if(op=="-"){
	 std::cout<<"\tsubu    "<<context.t_reg_no<<" "<<context.t_reg_no<<std::endl;
 }
 if(op=="*"){
	 std::cout<<"\tmult    $3,$2"<<std::endl;
	 std::cout<<"\tsw      "<<"context.getOffset()"<<"($30)"<<std::endl;
 }
 if(op=="/"){
	 GetTempReg(context.t_reg_no);
	 int under = context.t_reg_no;


	  std::cout<<"\tbne    "<<under<<",$0"<<std::endl;
		std::cout<<"\tbne    "<<under<<",$0"<<std::endl;
		std::cout<<"\tbreak   7"<<std::endl;

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
	 std::cout<<"\tlw      "<<"$2,28($fp)"<<std::endl;
	 std::cout<<"\tnop"<<std::endl;
	 std::cout<<"\tsll     "<<"$2,$2,1"<<std::endl;
	 std::cout<<"\tsw      "<<"$2,24($fp)"<<std::endl;
 }
 if(op==">>"){
	 std::cout<<"\tsra     "<<"$2,$2,1"<<std::endl;
	 std::cout<<"\tsw      "<<"$2,24($fp)"<<std::endl;
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
	std::cerr<<"jmpstmt"<<std::endl;
	std::cout<<std::endl;
	//std::cout<<what<<": "<<std::endl;
	if(body!=NULL){
		body->compile(context);
	}
	if(what=="return"){
		std::cout<<"\tli      $2,"<<context.returnval<<std::endl;
		std::cout<<"\tb       $L0"<<std::endl;
	}
	std::cout<<std::endl;
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
	std::cout<<"\tb       $L"<<current_ln<<std::endl;
	std::cout<<"\tnop"<<std::endl;
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
		std::cerr<<"comp_body: "<<std::endl;
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
	context.is_label=true;
	context.is_label=false;
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
	std::cerr<<"ddec"<<std::endl;
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
	context.is_label=true;
	//value to jump to on return context.current_ln
	std::cout<<".align  2"<<std::endl;
	std::cout<<".globl  ";
	name->compile(context);std::cout<<std::endl;
	std::cout<<".ent    ";
	name->compile(context);std::cout<<std::endl;
	std::cout<<".type   ";
	name->compile(context);std::cout<<", @function"<<std::endl;
	std::cerr<<"funcdef"<<std::endl;
	if(name!=NULL){
		context.is_label=true;
		name->compile(context);
	}

	std::cout<<":"<<std::endl;
	std::cout<<"\taddiu   $sp,$sp,"<<-256<<std::endl;//hardcoded, adjust number somehow?
	std::cout<<"\tsw      $fp,252($sp)"<<std::endl;//why?
	std::cout<<"\tmove    $fp,$sp"<<std::endl;
	if(params!=NULL){
		params->compile(context);
		for(int i=1;i<=context.para_no;i++){//to mult w/4
			std::cout<<"\tsw      "<<context.t_reg_no<<","<<4*i<<"($fp)"<<std::endl;//for ints?
		}
		std::cout<<"\tmove    $sp,$fp"<<std::endl;
	}
	if(body!=NULL){
			body->compile(context);
	}
	std::cout<<"$L0:"<<std::endl;//to deal with multiple returns, automate their jump to here if they are executed
	std::cout<<"\tmove    $sp,$fp"<<std::endl;
	std::cout<<"\tlw      $fp,252($sp)"<<std::endl;
	std::cout<<"\taddiu   $sp,$sp,256"<<std::endl;
	std::cout<<"\tj $31"<<std::endl;
	std::cout<<"\tnop"<<std::endl;
}
void GetTempReg(int& r){
	r++;
	if((r>15)|(r<8)){
		std::exit(-1);
	}
}
void ReplaceTempReg(int& r){
	r--;
}
