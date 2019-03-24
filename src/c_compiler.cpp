#include "abstsyntree.hpp"

#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[]){
				std::cerr<<"here translation"<<std::endl;
    if(argc<2){
        fprintf(stderr, "no srccode.\n");
        exit(1);
    }
		int i1=2;int i2=4;

		if(argc<2){
        fprintf(stderr, "no srccode.\n");
        exit(1);
    }
		FILE *src=freopen(argv[i1], "r", stdin);

		freopen(argv[i2], "w", stdout);
		const nodePtr ast=parseAST(src);
		extern bool do_main;
		translate_context context;
		ast->print();
		if(std::string(argv[1]) == "--translate"){
			std::cerr<<"start translation"<<std::endl;
			ast->translate();
		}
		if(do_main){
			std::cout<<"# Boilerplat"<<std::endl;
			std::cout<<"if __name__ == "<<'"'<<"__main__"<<'"'<<":"<<std::endl;
			std::cout<<"    import sys"<<std::endl;
			std::cout<<"    ret=main()"<<std::endl;
			std::cout<<"    sys.exit(ret)";
		}
		else if(std::string(argv[1]) == "-S"){
			std::cout<<"start compilation"<<std::endl;
			ast->compile(context);
			std::cout<<"start"<<std::endl;
		}

    return 0;
}
