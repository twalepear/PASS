#include <iostream>

void modify(int* pointer){
	*pointer /= 7;
}

int main(){
	int y = 14;
	modify(&y);
	std::cout << y << std::endl;
	return 0;
}