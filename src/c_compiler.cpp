#include "abstsyntree.hpp"

#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[]){
    if(argc<2){
        fprintf(stderr, "no srccode.\n");
        exit(1);
    }
		int i1=2;int i2=5;
		if(*argv[5]=='d'){
      i1=i1++;
			i2=i2++;
    }
		if(argc<2){
        fprintf(stderr, "no srccode.\n");
        exit(1);
    }
		FILE *src=freopen(argv[i1], "r", stdin);

		freopen(argv[i2], "w", stdout);
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
