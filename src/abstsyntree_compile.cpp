#include "abstsyntree.hpp"
//static int makeNameUnq=0;
///use r1 and r2 names each time

void  const_::compile(context){//ostream printing?
	std::cout<<value;
}
void identifier::compile(context){
  std::cout<<value;
}
void str_lit::compile(context){
  std::cout<<value;
}
void identifier::compile(context){
  std::cout<<value;
}
void add_expr::compile(context){
	regs(0) = L->compile(context);//act of compiling should return a value or load a variable from memory?
	regs(1) = R->compile(context);
	std::cout<<"addi t0, zero, "<<regs(0);
	std::cout<<"addi t0, zero, "<<regs(1);
	std::cout<<"add t0, t1, t0"<<std::endl;
}
void sub_expr::compile(context){
	regs(0) = L->compile(context);//act of compiling should return a value or load a variable from memory?
	regs(1) = R->compile(context);
	std::cout<<"addi t0, zero, "<<regs(0);
	std::cout<<"addi t0, zero, "<<regs(1);
	std::cout<<"sub t0, t1, t0"<<std::endl;
}
void div_expr::compile(context){
}
void mult_expr::compile(context){
	std::string lhs = L->compile(context);
	std::string rhs= R->compile(context);
	//std::cout<<"mult: "<<

	//std::cout<<"jr $ra";
}
void function_definition::compile(context){
	std::cout<<name<<": ";
	body->compile(context);
  std::cout<<"jr $ra";
};
