#include "ast.hpp"



//static int makeNameUnq=0;

static std::string getReg(std::string base)
{
  //return "_"+base+"_"+std::to_string(makeNameUnq++);
}

void CompileRec(std::string resultReg, nodePtr program){
  if(program->type="Number"){

  }else if(program->type="Variable"){

  }else if(program->type=="Param"){

  }else if(program->type=="Seq"){
    for(unsigned i=0; i<program->branches.size(); i++){
    }
  }else if(program->type=="Input"){

  }else if(program->type=="Output"){

  }else if(program->type=="LessThan"){

  }else if(program->type=="Add"){
		std::string s=findReg();
		std::string t=findReg();
		CompileRec(s, program->branches[0]);
		CompileRec(t, program->branches[1]);
		std::cout<<"add "<<resultReg<<", "<<s<<", "<<t<<std::endl;
  }else if(program->type=="Sub"){
		std::string s=findReg();
		std::string t=findReg();
		CompileRec(s, program->branches[0]);
		CompileRec(t, program->branches[1]);
		std::cout<<"sub "<<resultReg<<", "<<s<<", "<<t<<std::endl;
  }else if(program->type=="Mult"){
		std::string s=findReg();
		std::string t=findReg();
		CompileRec(s, program->branches[0]);
		CompileRec(t, program->branches[1]);
		std::cout<<"mult "<<s<<", "<<t<<std::endl;
  }else if(program->type=="Div"){
		std::string s=findReg();
		std::string t=findReg();
		CompileRec(s, program->branches[0]);
		CompileRec(t, program->branches[1]);
		std::cout<<"div "<<s<<", "<<t<<std::endl;
  }
	else{
      throw std::runtime_error("Unknown construct '"+program->type+"'");
  }
}
void Compile(nodePtr program){
    CompileRec(res, program);//compile all
}
