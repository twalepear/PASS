#include <iostream>

void doSomething(int* x){
	x+=70;
}

int main(){
	int x = 50;
	doSomething(x);
	std::cout << x << std::endl;
	return 0;
}