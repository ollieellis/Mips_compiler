int la(){
	int array[2]={1,2};
	a=array[0];
	b=array[1];
	a=b-a;
	a=b-a;
	array[0]=a;
	b=array[0];
	return b;
}
