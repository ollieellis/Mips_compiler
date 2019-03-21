#include "abstsyntree.hpp"

#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[]){
    if(argc<2){
        fprintf(stderr, "no srccode.\n");
        exit(1);
    }
		FILE *src=freopen(argv[2], "r", stdin);

		freopen(argv[4], "w", stdout);
		const nodePtr ast=parseAST(src);

		translate_context context;

		if(std::string(argv[1]) == "--translate"){
			std::cerr<<"start translation"<<std::endl;
			ast->translate(context);
		}
		else if(std::string(argv[1]) == "-S"){
			std::cout<<"start compilation"<<std::endl;
			ast->translate(context);
			std::cout<<"start"<<std::endl;
		}

    return 0;
}
