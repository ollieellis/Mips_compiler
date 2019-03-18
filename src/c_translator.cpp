#include "abstsyntree.hpp"

#include <cstdlib>
#include <fstream>

int main(int argc, char *argv[]){
    if(argc<2){
        fprintf(stderr, "no srccode.\n");
        exit(1);
    }

    std::ifstream code(argv[1]);
    translate_context context;

    for(int i=2; i<argc; i++){
        context.params.push_back(atol(argv[i]));
    }
    nodePtr src=Parse(code);
		src->translate(context);

    return 0;
}
