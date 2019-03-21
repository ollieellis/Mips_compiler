#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include <string>
#include <vector>
//static int makeNameUnq=0;
//use r1 and r2 names each time

void  constant::compile(translate_context &context){//ostream printing?
	std::cout<<value;
}
void identifier::compile(translate_context &context){
  std::cout<<value;
}
void str_lit::compile(translate_context &context){
  std::cout<<value;
}
void plus_expr::compile(translate_context &context){
	L->compile(context);//act of compiling should return a value or load a variable from memory?
	R->compile(context);
	std::cout<<"addi t0, zero, "<<context.regs[0];
	std::cout<<"addi t0, zero, "<<context.regs[1];
	std::cout<<"add t0, t1, t0"<<std::endl;
}
void minus_expr::compile(translate_context &context){
	L->compile(context);//act of compiling should return a value or load a variable from memory?
	R->compile(context);
	std::cout<<"addi t0, zero, "<<context.regs[0];
	std::cout<<"addi t0, zero, "<<context.regs[1];
	std::cout<<"sub t0, t1, t0"<<std::endl;
}
void div_expr::compile(translate_context &context){
}
void times_expr::compile(translate_context &context){
	L->compile(context);
	R->compile(context);
	//std::cout<<"mult: "<<

	//std::cout<<"jr $ra";
}
void mod_expr::compile(translate_context &context){

}
void while_stmt::compile(translate_context &context){

}
void ifelse_stmt::compile(translate_context &context){

}
void return_stmt::compile(translate_context &context){

}

void lshift::compile(translate_context &context){

}
void rshift::compile(translate_context &context){

}
void incr::compile(translate_context &context){

}
void decr::compile(translate_context &context){

}
void cond_expr::compile(translate_context &context){

}

void assign_expr::compile(translate_context &context){

}
void unary_op::compile(translate_context &context){

}
void assign_op::compile(translate_context &context){

}
void and_expr::compile(translate_context &context){

}
void lt::compile(translate_context &context){

}
void gt::compile(translate_context &context){

}
void gte::compile(translate_context &context){

}
void lte::compile(translate_context &context){

}
void xor_expr::compile(translate_context &context){

}
void or_expr::compile(translate_context &context){

}
void stmt_node::compile(translate_context &context){

}
void label_stmt::compile(translate_context &context){

}
void notequal_expr::compile(translate_context&){}
void isequal_expr::compile(translate_context&){}
void function_definition::compile(translate_context &context){
	std::cout<<name<<": ";
	body->compile(context);
  std::cout<<"jr $ra";
};
