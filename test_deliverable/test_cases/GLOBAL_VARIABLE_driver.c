extern int x;
global_variable();

int main(){
	return global_variable(); //should there be a line after this???
	//this line would use the result of the above function ????
}