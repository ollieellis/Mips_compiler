#include "abstsyntree.hpp"

#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[]){

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

		int tabc=0;
		freopen(argv[i2], "w", stdout);
		const nodePtr ast=parseAST(src);
		extern bool do_main;
		translate_context context;
		//ast->print();
		std::cerr<<"here translation"<<std::endl;
		if(std::string(argv[1]) == "--translate"){
			std::cerr<<"start translation"<<std::endl;
			ast->translate(tabc);
		}
		if(do_main){
			std::cout<<std::endl;
			std::cout<<"# Boilerplate"<<std::endl;
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
