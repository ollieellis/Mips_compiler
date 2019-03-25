int recursion(int a){
	if(a==0){
		return 0;
	}
	else{
		a = a - 1;
		recursion(a);
	}
}