#include <iostream>

int main(){
	int array[] = {3, 6, 9};
	int* ptr;
	ptr = &array[0];
	for (int i = 0; i < 2; i++){
		std::cout << *(ptr+i) << " ";
	}
	std::cout << std::endl;
	return 0;
}