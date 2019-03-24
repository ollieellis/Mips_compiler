#include "abstsyntree_expr.hpp"//global variables create vector to add any pgloab faviables to ie functions etc?
#include "abstsyntree_dcls.hpp"
#include "abstsyntree_stmts.hpp"
#include <string>
#include <vector>
//static int makeNameUnq=0;
//use r1 and r2 names each time
//nodes need functions in translate and compile
void  constant::compile(translate_context &context){//ostream printing?
	std::cout<<value;
}
void identifier::compile(translate_context &context){
  std::cout<<value;
}
void str_lit::compile(translate_context &context){
  std::cout<<value;
}
void binary_expr::compile(translate_context &context){
 if(op=="+"){

 }
 if(op=="-"){

 }
}

void function_definition::compile(translate_context &context){
	std::cout<<name<<": ";
	body->compile(context);
  std::cout<<"jr $ra";
};
