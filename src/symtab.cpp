#include "symtab.hpp"


symtab symboltable;

symtab(){};
//check destructor?
int32_t symtab::Lookup(std::string id){
	if(symboltable.count(id)==0){
		std::cerr<<"variable "<<id<<"not found"<<std::endl;
		return -1;//check
	}
};
void symtab::Bind(std::string id, int32_t value){
	if(symboltable.count(id)!= 0) {
		std::cerr<<"variable "<<id<<"already bound"<<std::endl;
	}
	else symboltable(id)=value;
};
