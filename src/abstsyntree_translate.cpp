#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include <string>
#include <vector>
std::vector<std::string> global_var;
void print_tab(int x);
void constant::translate(int& tc){//ostream printing?
	std::cerr<<"const"<<value<<std::endl;
  std::cout<<value;
}
void identifier::translate(int& tc){
	std::cerr<<"id"<<value<<std::endl;
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
	std::cout<<",";
	if(R!=NULL){
		R->translate(tc);
	}
}
//unary
//postfix
void incr::translate(int& tc){
		std::cerr<<"incr"<<std::endl;
	print_tab(tc);std::cout<<"+=1";
	if(S!=NULL){
		S->translate(tc);
		std::cout<<std::endl;
	}
}
void decr::translate(int& tc){
	std::cerr<<"decr"<<std::endl;
	print_tab(tc);std::cout<<"-=1";
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
	print_tab(tc);
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
	std::cerr<<"compstmt";
	if(body!=NULL){
		std::cerr<<"comp_body: ";
		body->translate(tc);
	}
	if(extra!=NULL){
		std::cerr<<"comp_extra: ";
		extra->translate(tc);
	}
	std::cout<<std::endl;
}
void do_stmt::translate(int& tc){
	std::cerr<<"dostmt"<<std::endl;
	std::cout<<"do: ";
	tc++;
	if(task!=NULL){
		task->translate(tc);
	}
	if(condition!=NULL){
		condition->translate(tc);
	}
	tc--;
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
	if(body!=NULL){
		std::cerr<<"tabcf"<<tc<<std::endl;
		body->translate(tc);
		tc--;
	}
	std::cout<<std::endl;
}
void unary_expr::translate(int& tc){
	std::cerr<<"unaryexpr"<<std::endl;
	if(op!=NULL){
		op->translate(tc);
	}
	if(S!=NULL){
		S->translate(tc);
		std::cout<<std::endl;
	}

}


void size_of::translate(int& tc){
	std::cout<<"sizeof(";
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
	//std::cout<<what;
	std::cout<<"switch:";
	task->translate(tc);
}
void decl_specs::translate(int& tc){
	std::cerr<<"declspecs"<<std::endl;
	print_tab(tc);
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
		 std::cerr<<"stmtl vec: ";
		print_tab(tc);(v[i])->translate(tc);

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
		print_tab(tc);std::cout<<*(v[i]);
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
		list->translate(tc);
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
	tc++;
	print_tab(tc);std::cout<<"if ";
	std::cout<<"(";
	condition->translate(tc);
	std::cout<<"):"<<std::endl;
	print_tab(tc);body->translate(tc);
	if(else_body!=NULL){
		print_tab(tc);std::cout<<"else ";
		else_body->translate(tc);
	}
}
void while_stmt::translate(int& tc){
	std::cerr<<"whilestmt"<<std::endl;
	std::cout<<"while ";
	std::cout<<"(";
	condition->translate(tc);
	std::cout<<"):"<<std::endl;
	if(body!=NULL){
		body->translate(tc);
	}
	std::cout<<std::endl;
}
void for_stmt::translate(int& tc){
	std::cerr<<"forstmt"<<std::endl;
	std::cout<<"for ";
	if(start!=NULL){
		start->translate(tc);
	}
	if(end!=NULL){
		end->translate(tc);
	}
	if(alter!=NULL){
		alter->translate(tc);
	}
	if(task!=NULL){
		task->translate(tc);
	}
}

//---------declarations
void function_definition::translate(int& tc){
	std::cerr<<"funcdef"<<std::endl;

	std::cout<<"def ";
	if(name!=NULL){
		print_tab(tc);
		name->translate(tc);
	}
	if(params!=NULL){
		params->translate(tc);
	}
	std::cout<<":"<<std::endl;
	tc++;
	if(body!=NULL){
		body->translate(tc);
		std::cout<<std::endl;
	}
}

void decl_list::translate(int& tc){
	std::cerr<<"decllist"<<std::endl;

	for(int i=0;i<v.size();i++){
		if(tc==0){
			std::cout<<"global ";
		}
		if(v[i]!=NULL){
			v[i]->translate(tc);
		}
	}
};
void p_declarator::translate(int& tc){
	std::cerr<<"pdeclarator"<<std::endl;

	std::cout<<"pdec: ->";
}
void print_tab(int x){
	for(int i=0;i<x;i++){
		std::cout<<"	";
	}
};
