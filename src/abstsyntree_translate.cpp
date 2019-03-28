#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include <string>
#include <vector>
std::vector<std::string> global_var;
static bool globalf=false;
void print_tab(int x);
void constant::translate(int& tc){//ostream printing?
	std::cerr<<"const"<<value<<std::endl;
  std::cout<<value;
}
void identifier::translate(int& tc){
	std::cerr<<"id"<<value<<std::endl;
	if(globalf){
		global_var.push_back(value);
		globalf=false;
	}
  std::cout<<value;
}
void str_lit::translate(int& tc){
	std::cerr<<"str"<<value<<std::endl;
  std::cout<<value;
}

//binary
//arithmetic

void seperator_expr::translate(int& tc){
	std::cerr<<"seper"<<std::endl;
	if(L!=NULL){
		L->translate(tc);
	}
	std::cout<<", ";
	if(R!=NULL){
		R->translate(tc);
	}
}
void bracketed_expr::translate(int& tc){
	std::cerr<<"b_expr"<<std::endl;
	if(E!=NULL){
		std::cout<<LB;
		E->translate(tc);
		std::cout<<RB;
		std::cout<<std::endl;
	}
}
//unary
//postfix

void incr::translate(int& tc){
		std::cerr<<"incr"<<std::endl;
	std::cout<<"+=1";
	if(S!=NULL){
		S->translate(tc);
		std::cout<<std::endl;
	}
}
void decr::translate(int& tc){
	std::cerr<<"decr"<<std::endl;
	std::cout<<"-=1";
	if(S!=NULL){
		S->translate(tc);
		std::cout<<std::endl;
	}
}

void cond_expr::translate(int& tc){
	std::cerr<<"condexpr"<<std::endl;
	if(condition!=NULL){
		condition->translate(tc);
	}
	if(option1!=NULL){
		option1->translate(tc);
	}
	if(option2!=NULL){
		option2->translate(tc);
	}
}

void unary_op::translate(int& tc){
	std::cerr<<"unaryop"<<op<<std::endl;
	std::cout<<op;
}
void binary_expr::translate(int& tc){
	std::cerr<<"binaryexpr"<<op<<std::endl;
	if(L!=NULL){
		L->translate(tc);
	}
	if(op=="&&"){
		op=" and ";
	}
	if(op=="||"){
		op=" or ";
	}
	std::cout<<op;
	if(R!=NULL){
		R->translate(tc);
	}
}
void type_qual::translate(int& tc){
	std::cerr<<"qual"<<std::endl;
	//std::cout<<qual;
}
void array::translate(int& tc){
	std::cerr<<"array"<<std::endl;
	if(name!=NULL){
			name->translate(tc);
	}
	std::cout<<"[";
	if(args!=NULL){
			args->translate(tc);
	}
	std::cout<<"]";
};
void member::translate(int& tc){
	std::cerr<<"member"<<std::endl;
	std::cout<<"member trans";
};
void ideclarator::translate(int& tc){
	std::cerr<<"ideclarator"<<std::endl;
	//print_tab(tc);
	if(tc==0){
		globalf=true;
	}
	else{
		globalf=false;
	}
	if(var!=NULL){
		var->translate(tc);
	}
	std::cout<<"=0"<<std::endl;
}
void function_name::translate(int& tc){
	std::cerr<<"funcname"<<std::endl;

	if(name!=NULL){
			name->translate(tc);
	}
	std::cout<<lb;
	if(args!=NULL){
		std::cerr<<"args"<<std::endl;
		args->translate(tc);
	}
	std::cout<<rb;
}
void param_decl::translate(int& tc){
	std::cerr<<"param_decl"<<std::endl;
	if(l!=NULL){
		std::cerr<<"l"<<std::endl;
		l->translate(tc);
	}
	if(r!=NULL){
		std::cerr<<"r"<<std::endl;
		r->translate(tc);
	}
}
void type_name::translate(int& tc){
std::cerr<<"typename"<<std::endl;
}
//statements------------------
void comp_stmt::translate(int& tc){
	std::cerr<<"compstmt"<<std::endl;
	if(body!=NULL){
		std::cerr<<"comp_body: "<<std::endl;
		body->translate(tc);
	}
	if(extra!=NULL){
		std::cerr<<"comp_extra: "<<std::endl;
		extra->translate(tc);
	}
	std::cout<<std::endl;
}

void label_stmt::translate(int& tc){
	std::cerr<<"lblstmt"<<std::endl;
	std::cout<<label<<":"<<std::endl;
	if(fact!=NULL){
		fact->translate(tc);
	}
	if(option!=NULL){
		option->translate(tc);
	}
}
void jump_stmt::translate(int& tc){
	std::cerr<<"jmpstmt"<<std::endl;
	std::cout<<std::endl;
	print_tab(tc);std::cout<<what<<" ";
	tc++;
	if(body!=NULL){
		std::cerr<<"tabcf"<<tc<<std::endl;
		body->translate(tc);
	}
	tc--;
	std::cout<<std::endl;
}
void expr_stmt::translate(int& tc){
		std::cerr<<"exprstmt"<<std::endl;
	if(E!=NULL){
		print_tab(tc);E->translate(tc);
	}
}
void unary_expr::translate(int& tc){
	std::cerr<<"unaryexpr"<<std::endl;
	if(op!=NULL){
		op->translate(tc);
	}
	if(S!=NULL){
		S->translate(tc);
	}

}


void size_of::translate(int& tc){
	std::cerr<<"sizeof(";
}

void dir_abst_declarator::translate(int& tc){
	std::cerr<<"dirabstdec"<<std::endl;
	if(name!=NULL){
		name->translate(tc);
	}
	std::cout<<lb;
	if(args!=NULL){
		args->translate(tc);
	}
	std::cout<<rb;
}
void switch_stmt::translate(int& tc){
	std::cerr<<"switchstmt"<<std::endl;
	if(task!=NULL){
		task->translate(tc);
	}
}
void decl_specs::translate(int& tc){
	std::cerr<<"declspecs"<<std::endl;
	//print_tab(tc);
	if(l!=NULL){
		l->translate(tc);
	}
	if(r!=NULL){
		r->translate(tc);
	}
}

void stmt_list::translate(int& tc){
	std::cerr<<"stmtlist"<<std::endl;
	for(int i=0; i<v.size();i++){
	 if(v[i]!=NULL){
		(v[i])->translate(tc);
	 }
	 std::cout<<std::endl;
	}
}
void expr_list::translate(int& tc){
	std::cerr<<"exprlist"<<std::endl;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			(v[i])->translate(tc);
		}
		if((v.size()>1)&&(i!=(v.size()-1))){
			std::cout<<",";
		}
	}
}
void type_list::translate(int& tc){
	std::cerr<<"typelist"<<std::endl;
	for(int i=0;i<v.size();i++){
		(v[i])->translate(tc);
	}
}
void string_list::translate(int& tc){
	std::cerr<<"strlist"<<std::endl;
	for(int i=0;i<v.size();i++){
		std::cout<<*(v[i]);
	}
}
void d_declarator::translate(int& tc){
	std::cerr<<"ddec"<<std::endl;
	if(dd!=NULL){
		dd->translate(tc);
	}
	std::cout<<lb;

	if(args!=NULL){
		args->translate(tc);
	}
	std::cout<<rb;
}
void para_t_list::translate(int& tc){
	std::cerr<<"p_t_list"<<std::endl;
	if(list!=NULL){
		print_tab(tc);list->translate(tc);
	}
	std::cout<<comma<<ellipses;
}
void cast_expr::translate(int& tc){
	std::cerr<<"cast_expr"<<std::endl;
	if(L!=NULL){
		L->translate(tc);
	}
	std::cout<<"(";
	if(R!=NULL){
		R->translate(tc);
	}
	std::cout<<")";
}
void init_list::translate(int& tc){
	std::cerr<<"init_list"<<std::endl;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			print_tab(tc);v[i]->translate(tc);
			//std::cout<<std::endl;
		}
	}
}
void init::translate(int& tc){
	std::cerr<<"init"<<std::endl;
	if(n!=NULL){
		n->translate(tc);
		std::cout<<comm;
	}
}
void ifelse_stmt::translate(int& tc){
	std::cerr<<"ifelsestmt"<<std::endl;
	print_tab(tc);std::cout<<"if ";
	std::cout<<"(";
	condition->translate(tc);
	std::cout<<"):"<<std::endl;
	print_tab(tc+1);std::cout<<"pass"<<std::endl;//noop
	tc++;
	body->translate(tc);
	tc--;
	if(else_body!=NULL){
		print_tab(tc);std::cout<<"else: "<<std::endl;
		print_tab(tc+1);std::cout<<"pass"<<std::endl;//noop
		tc++;
		else_body->translate(tc);
		tc--;
	}
}
void while_stmt::translate(int& tc){
	std::cerr<<"whilestmt"<<std::endl;
	print_tab(tc);std::cout<<"while ";
	std::cout<<"(";
	condition->translate(tc);
	std::cout<<"):"<<std::endl;
	print_tab(tc+1);std::cout<<"pass"<<std::endl;//noop
	tc++;
	if(body!=NULL){
		body->translate(tc);
	}
	tc--;
	std::cout<<std::endl;
}

//---------declarations
void function_definition::translate(int& tc){
	std::cerr<<"funcdef"<<std::endl;
	print_tab(tc);std::cout<<"def ";
	if(name!=NULL){
		name->translate(tc);
	}
	if(params!=NULL){
		params->translate(tc);
	}
	std::cout<<":"<<std::endl;

	std::cerr<<"GsizeG"<<global_var.size()<<std::endl;
	for(int i=0;i<global_var.size();i++){
		std::cout<<"	global "<<global_var[i]<<std::endl;
	}
	tc++;
	print_tab(tc);std::cout<<"pass"<<std::endl;
	if(body!=NULL){
		body->translate(tc);
		std::cout<<std::endl;
	}
	tc--;
}

void decl::translate(int& tc){
		L->translate(tc);
		R->translate(tc);
}
void decl_list::translate(int& tc){
	std::cerr<<"decllist"<<std::endl;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			print_tab(tc);v[i]->translate(tc);
		}
	}
	std::cout<<std::endl;
};
void init_decl_list::translate(int& tc){
	std::cerr<<"initdecllist"<<std::endl;
	int temptc;
	for(int i=0;i<v.size();i++){
		if(v[i]!=NULL){
			if((i==0)){
				v[i]->translate(tc);
				 temptc=tc;
			}
			else if(temptc!=0){
				std::cout<<std::endl;
				print_tab(temptc);v[i]->translate(tc);temptc=tc;
			}
			else{
				v[i]->translate(tc);
			}
		}
	}
	std::cout<<std::endl;
};
void p_declarator::translate(int& tc){
	std::cerr<<"pdeclarator"<<std::endl;
}
void print_tab(int x){
	std::cerr<<"			current tab="<<x<<std::endl;
	if(x>0){
		for(int i=0;i<x;i++){
			std::cout<<"	";
		}
	}
};
