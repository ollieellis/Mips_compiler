#include "abstsyntree.hpp"
//static int makeNameUnq=0;

std::vector<std::string> regs;//just use unchangeable registers pluse two
///use r1 and r2 names each time
#include "abstsyntree.hpp"
std::string  const_::compile(){//ostream printing?
	return value;
}
std::string identifier::compile(){
  return value;
}
std::string str_lit::compile(){
  return value;
}
std::string identifier::compile(){
  return value;;
}
void add_expr::compile(){
	regs(0) = L->compile();//act of compiling should return a value or load a variable from memory?
	regs(1) = R->compile();
	std::cout<<"addi t0, zero, "<<regs(0);
	std::cout<<"addi t0, zero, "<<regs(1);
	std::cout<<"add t0, t1, t0"<<std::endl;
}
void sub_expr::compile(){
	regs(0) = L->compile();//act of compiling should return a value or load a variable from memory?
	regs(1) = R->compile();
	std::cout<<"addi t0, zero, "<<regs(0);
	std::cout<<"addi t0, zero, "<<regs(1);
	std::cout<<"sub t0, t1, t0"<<std::endl;
}
void div_expr::compile(){
}
void mult_expr::compile(){
	std::string lhs = L->compile();
	std::string rhs= R->compile();
	//std::cout<<"mult: "<<

	//std::cout<<"jr $ra";
}
void function_definition::compile(){
	std::cout<<name<<": ";
	body->compile();
  std::cout<<"jr $ra";
};
void compile(){

};
