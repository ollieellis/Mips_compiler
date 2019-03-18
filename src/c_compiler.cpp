#include <fstream>
#include "abstsyntree.hpp"

int main(int argc, char *argv[]){
    if(argc < 2){
      fprintf(stderr, "usage : compiler sourceCode\n");
      exit(1);
    }
    std::ifstream src(argv[1]);
    if(!src.is_open()){
      fprintf(stderr, "Couldn't open '%s'\n", argv[1]);
      exit(1);
    }
		translate_context context;
		//std::vector<uint32_t> regs;
    nodePtr tree=Parse(src);
    tree->compile(symtab);//compile all
    return 0;
}
