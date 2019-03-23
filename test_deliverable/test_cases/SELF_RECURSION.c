int rec(int a,int b){
	if(a==0){
		return 0;
	}
	else{
		b = rec(0,0);
		return -2;
	}
	return -1;
}
