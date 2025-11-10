#include <iostream>

int* createArray(){
	int newArray[3]; // lives on the stack
	newArray[0] = 40;
	newArray[1] = 30;
	newArray[2] = 20;
	return newArray; // return a pointer that points to memory that is no longer valid
}

int main(){
	int* myArray = createArray();
	std::cout << myArray[2] << std::endl;
	return 0;
}