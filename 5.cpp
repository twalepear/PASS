#include <iostream>

void multiply(int& x){
	x*=4;
}

int main(){
	int x = 1, y = 2;
	multiply(x); multiply(y);
	std::cout << x << ',' << y << std::endl;
	return 0;
}