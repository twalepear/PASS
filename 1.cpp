#include <iostream>

int main(){
	int x = 20;
	int* pointerToX = &x;
	*pointerToX = 10;
	int y = *pointerToX + 4;
	std::cout << y << ',' << x << ',' << *pointerToX << std::endl;
	return 0;
}