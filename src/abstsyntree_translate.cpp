#include "abstsyntree.hpp"
void const_::translate(){
  std::cout<<value;
}
void identifier::translate(){
    std::cout<<symtab[id];
}
void str_lit::translate(){
  std::cout<<str;
}
void identifier::translate()
  std::cout<<id;
}
//arithmetic
void plus_expr::translate(){

}
void minus_expr::translate(){

}
void times_expr::translate(){

}
void div_expr::translate(){

}
void translate(nodePtr program){
}
