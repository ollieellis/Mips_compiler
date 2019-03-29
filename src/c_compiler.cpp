#include "abstsyntree.hpp"

#include <cstdlib>
#include <fstream>
#include <stack>

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
		//for (int i=0; i<5; ++i) stack.push(i);
		std::vector<int> scope_temp(9, 0);
		context.label_no=1;//$L0 is for all returns jump to end
		context.t_reg_no=9;
		context.current_offset=0;
		context.offset_base=0;
		context.current_scope_index=0;
		context.current_scope=scope_temp;
		context.is_label=false;
		context.store_symbol=false;
		context.load_symbol=false;
		context.load_offset=0;
		context.get_returnval=false;
		context.get_condition=false;

		if(std::string(argv[1]) == "--translate"){
			std::cerr<<"start translation"<<std::endl;
			ast->translate(tabc);
		}
		else if(std::string(argv[1]) == "-S"){
			std::cerr<<"start compilation"<<std::endl;
			std::cout<<".text"<<std::endl;
			ast->compile(context);
		}
		if(do_main&&(std::string(argv[1]) == "--translate")){
			std::cout<<std::endl;
			std::cout<<"# Boilerplate"<<std::endl;
			std::cout<<"if __name__ == "<<'"'<<"__main__"<<'"'<<":"<<std::endl;
			std::cout<<"    import sys"<<std::endl;
			std::cout<<"    ret=main()"<<std::endl;
			std::cout<<"    sys.exit(ret)";
		}

    return 0;
}
