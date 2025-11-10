#include <iostream>

int main(){
	int arrayOriginal[] = {5, 6, 7, 9};
	int* arrayCopy;
	arrayCopy = arrayOriginal;
	std::cout << arrayCopy[3] << std::endl;
	return 0;
}