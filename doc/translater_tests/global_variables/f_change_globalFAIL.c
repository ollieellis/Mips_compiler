int a=5

int f();

int main(){
	f();
	int x;
	x=a-4;
	return x;
}

int f(){
	int x;
	a=a-1;
	x=a-4;
	return x;
}