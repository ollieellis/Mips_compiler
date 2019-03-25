int local_array(){
	int array[2]; //length 3 so the two elements are not adjacent
	array[0] = 1;
	array[2] = 2;

	int x;
	int x = array[2] - array[0]; //not assigned to decrease the symtab
	x = x-1;
	return x;
}