void while_stmt::compile(translate_context &context){
	int current_ln = context.label_no;//current label number
	context.label_no = context.label_no+1;
	std::cout<<"$L"<<current_ln<<":";

	//find branch condition
	context.get_condition=true;
	std::cout<<"lw ";//get free reg
	condition->compile(context);std::cout<<","<<"right variable offset"<<"($30)"<<std::endl;
	body->compile(context);std::cout<<"($30)"<<std::endl;
	std::cout<<"\tb       $L"<<current_ln<<std::endl;
	std::cout<<"\tnop"<<std::endl;
}

void while_stmt::compile(translate_context &context){
	int while_start = context.label_no;//current label number
	context.label_no = context.label_no+1;
	int while_end = context.label_no;
	context.label_no = context.label_no+1;
	
	std::cout<<"$L"<<while_start<<":";
	
	std::cout<<"lw ";//get free reg
	condition->compile(context); //this line should return a number becuase its an EXPR
	//assuming it returns to s£2 the return reg??
	std::cout << "beq " << "s$2, " << "$0 $L" << while_end <<std:endl; //no tabs n stuff yet
	std::cout<<"\tnop"<<std::endl; //mips piepling w branches

	body->compile(context); //compiling $5 dont quite get the offset ngl
	//here some sort of jump insturcution is neede but i dont know how to work out the offset
	std::cout<<"$L"<<while_end<<":";
}
