#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include "abstsyntree.hpp"
#include <string>
#include <vector>
typedef std::unordered_map< int, std::unordered_map< std::string, int> > outer_map;
typedef std::unordered_map< std::string, int> inner_map;


void GetTempReg(int& r);
void ReplaceTempReg(int& r);
int GetOuterKey(std::vector<int> v);
void GiveSymtab(outer_map& M, std::vector<int> v, std::string symbol, int offset);
void GetSymtab(outer_map M, std::vector<int> v, std::string symbol, int& l_o);

//static int makeNameUnq=0;
//use r1 and r2 names each time

void  constant::compile(translate_context& context){
	std::cerr<<"const"<<value;
	if(context.get_returnval){
		context.returnval=value;
		std::cout<<"\tli      $2,"<<context.returnval<<std::endl;
	}
	else{
		std::cout<<"\tli      $8, "<<value<<std::endl;
	}
}
void identifier::compile(translate_context& context){
	if(context.get_returnval){
		GetSymtab(context.symtab,context.current_scope,value,context.load_offset);
		std::cout<<"\tlw      $2,"<<4*context.load_offset<<"($fp)"<<std::endl;
	}
	std::cerr<<"id"<<value<<std::endl;
	if(context.is_label){
		std::cerr<<"label"<<std::endl;
  	std::cout<<value;
		context.is_label=false;
	}
	else if(context.store_symbol){
		std::cerr<<"storesym"<<std::endl;
		//search current_scope for right inner map
		//search inner map for current variable
		//get/create variable offset
		context.current_offset++;
		outer_map::const_iterator get=(context.symtab).find(GetOuterKey(context.current_scope));
		if(get == (context.symtab).end()){
			GiveSymtab(context.symtab,context.current_scope,value,context.current_offset);
			GetSymtab(context.symtab,context.current_scope,value,context.load_offset);
			std::cout<<"\tsw      $8,"<<4*context.current_offset<<"($fp)"<<std::endl;
		}
		else{
				std::cerr<<"symbol already stored"<<std::endl;
		}
			context.store_symbol=false;
	}
	else if(context.load_symbol){
		std::cerr<<"loadsym"<<std::endl;
		outer_map::const_iterator get=(context.symtab).find(GetOuterKey(context.current_scope));
		if(get != (context.symtab).end()){
			GetSymtab(context.symtab,context.current_scope,value,context.load_offset);
			GetTempReg(context.t_reg_no);
			std::cout<<"\tlw      $"<<context.t_reg_no<<","<<context.load_offset<<"($fp)"<<std::endl;
			std::cout<<"\tnop"<<std::endl;
		}
		else{
			std::cerr<<"symbol not found"<<std::endl;
		}
	}
	else if(context.get_returnval){
				std::cerr<<"getreturnval"<<std::endl;
	//get variable offset
	}
		std::cerr<<"getnone"<<std::endl;
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
void expr_stmt::compile(translate_context& context){
		std::cerr<<"exprstmt"<<std::endl;
	if(E!=NULL){
		E->compile(context);
	}
}
void binary_expr::compile(translate_context& context){
	std::cerr<<"binary"<<std::endl;
	if(op=="="){
			context.store_symbol=true;
			R->compile(context);
			L->compile(context);
	}
	else{
	context.load_symbol=true;

	 if(op=="+"){//addu or addiu?s
		 std::cerr<<"add"<<std::endl;
		 L->compile(context);
		 GetTempReg(context.t_reg_no);
		 std::cout<<"\taddiu   $"<<context.t_reg_no<<",$8,0"<<std::endl;
		 int ls = context.t_reg_no;
		 R->compile(context);
		 GetTempReg(context.t_reg_no);
		 std::cout<<"\taddiu   $"<<context.t_reg_no<<",$8,0"<<std::endl;
		 int rs= context.t_reg_no;
		 std::cout<<"\taddu    $8,$"<<ls<<",$"<<rs<<std::endl;
		 ReplaceTempReg(context.t_reg_no);
		 ReplaceTempReg(context.t_reg_no);
	 }
	 if(op=="-"){
		 L->compile(context);
		 std::cout<<"\tsubu    "<<context.t_reg_no<<" ";
		 R->compile(context);
		 std::cout<<context.t_reg_no<<std::endl;
	 }
	 if(op=="*"){
		 std::cout<<"\tmult    $3,$2"<<std::endl;
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
 	context.load_symbol=false;
}
void seperator_expr::compile(translate_context &context){

}
void bracketed_expr::compile(translate_context &context){
	if(E!=NULL){
		E->compile(context);
		std::cout<<std::endl;
	}
}
void incr::compile(translate_context &context){

}
void decr::compile(translate_context &context){

}
void unary_op::compile(translate_context &context){

}
void unary_expr::compile(translate_context &context){

}
void expr_list::compile(translate_context &context){
	std::cerr<<"exprlist"<<std::endl;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			(v[i])->compile(context);
		}
		if((v.size()>1)&&(i!=(v.size()-1))){
			//std::cout<<",";
		}
	}
}
void jump_stmt::compile(translate_context &context){
	std::cerr<<"jmpstmt"<<std::endl;
	std::cout<<std::endl;
	if(what=="return"){
		std::cerr<<"TRUE";
		context.get_returnval=true;
	}
	//std::cout<<what<<": "<<std::endl;
	if(body!=NULL){
		std::cerr<<"NULLBODY";
		body->compile(context);
	}
	if(what=="return"){

		std::cout<<"\tb       $L0"<<std::endl;
	}
	std::cout<<std::endl;
}
void while_stmt::compile(translate_context &context){
	context.label_no = context.label_no+1;
	int current_ln = context.label_no;//current label number
	std::cout<<"$L"<<current_ln<<":";

	//find branch condition
	context.get_condition=true;
	std::cout<<"lw ";//get free reg
	condition->compile(context);std::cout<<","<<"right variable offset"<<"($30)"<<std::endl;
	body->compile(context);std::cout<<"($30)"<<std::endl;
	std::cout<<"\tb       $L"<<current_ln<<std::endl;
	std::cout<<"\tnop"<<std::endl;
}

void array::compile(translate_context& context){

}
void member::compile(translate_context& context){

}
void type_qual::compile(translate_context& context){
	std::cerr<<"qual"<<std::endl;
	//std::cout<<qual;
}
void decl_list::compile(translate_context& context){
	std::cerr<<"decllist"<<std::endl;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			v[i]->compile(context);
		}
	}
	std::cout<<std::endl;
};
void init_decl_list::compile(translate_context& context){
	std::cerr<<"initdecllist"<<std::endl;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			v[i]->compile(context);
		}
	}
	std::cout<<std::endl;
};

void ideclarator::compile(translate_context& context){
	std::cerr<<"ideclarator"<<std::endl;
	//print_tab(tc);
	context.store_symbol=true;
	if(var!=NULL){
		var->compile(context);
	}
}
void function_name::compile(translate_context& context){

}
void param_decl::compile(translate_context& context){
	context.para_no++;
	context.load_symbol=true;
	if(r!=NULL){
		std::cerr<<"r"<<std::endl;
		r->compile(context);
	}
	GetTempReg(context.t_reg_no);
	std::cout<<"sw      "<<context.t_reg_no<<","<<context.offset_base+context.para_no*4<<"($fp)"<<std::endl;
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
void p_declarator::compile(translate_context& context){

}
void declarator::compile(translate_context& context){

}
void decl::compile(translate_context& context){
	std::cerr<<"decl"<<std::endl;
		L->compile(context);
		R->compile(context);
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
	context.current_scope_index++;
	context.para_no=0;
	context.current_scope[0]=context.current_scope[0]+1;
	context.is_label=true;
	context.offset_base=context.offset_base+126;
	//value to jump to on return context.current_ln
	std::cout<<".align  2"<<std::endl;
	std::cout<<".globl  ";
	name->compile(context);std::cout<<std::endl;
	context.is_label=true;
	std::cout<<".ent    ";
	name->compile(context);std::cout<<std::endl;
	context.is_label=true;
	std::cout<<".type   ";
	name->compile(context);std::cout<<", @function"<<std::endl;
	std::cerr<<"funcdef"<<std::endl;
	if(name!=NULL){
		context.is_label=true;
		name->compile(context);
		std::cout<<":"<<std::endl;
	}
	//colon printed in variable
	std::cout<<"\taddiu   $sp,$sp,"<<"-"<<context.offset_base+4<<std::endl;//hardcoded, adjust number somehow?
	std::cout<<"\tsw      $fp,"<<context.offset_base<<"($sp)"<<std::endl;//why?
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
	std::cout<<"\tlw      $fp,"<<context.offset_base<<"($sp)"<<std::endl;
	std::cout<<"\taddiu   $sp,$sp,"<<context.offset_base+4<<std::endl;
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
void GiveSymtab(outer_map& M, std::vector<int> v, std::string symbol, int offset){
	int o_key=GetOuterKey(v);
	inner_map temp=M[o_key];
	temp[symbol]=offset;
	std::cerr<<o_key<<symbol<<"			GIVE STAB: "<<offset<<symbol<<" "<<temp[symbol]<<std::endl;
	M[o_key]=temp;
	inner_map temp2=M[o_key];
}
void GetSymtab(outer_map M, std::vector<int> v, std::string symbol, int& l_o){
	int s_n=GetOuterKey(v);
	inner_map temp=M[s_n];
	std::cerr<<s_n<<symbol<<"			GET STAB: "<<symbol<<" "<<temp[symbol]<<std::endl;
	l_o = temp[symbol];
}
int GetOuterKey(std::vector<int> v){
	int sum=0;
	for(int i=1; i<=v.size(); i++){
		sum=i*v[i]+sum;//produce unique number for each scope
	}
	return sum;
}
