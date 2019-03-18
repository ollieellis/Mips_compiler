#ifndef symtab_hpp
#define symtab_hpp

#include <iostream>
#include <map>
#include <string>

class symtab{
  private:
		std::map<std::string,int32_t> bindings;
	public:
		symtab(){};
		//check destructor?
		int32_t Lookup(std::string id);
		void Bind(std::string id, int32_t value);
};
extern symtab symboltable;

#endif
