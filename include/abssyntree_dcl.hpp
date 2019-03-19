#ifndef abstsyntree_dcl_hpp
#define abstsyntree_dcl_hpp

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <memory>
#include <list>

//declarations---------------------------------------------------
class function_definition: public decl_node{
	protected:
		std::vector<nodePtr> args;
	public:
		function_definition(nodePtr name, std::vector<nodePtr> body): decl_node(name,body){};
		virtual void translate(translate_context &context);
		virtual void compile(translate_context &context);
};


#endif
