int if_true(){
	int x = 1; //must be set to one as if we dont assign int it could be 0; dont wanna use assignement tho
	if(1){ // is having an == expression here better?? i dont think its the if statement that tests the functinability of the expression 
		x=0; //this also tests assignment which isnt good, cant think of way round it				
	} //dont want to return before this line as checking the {} is exited correctly 
	return x; //is retuning an int to much ??? should i return 0??
}
