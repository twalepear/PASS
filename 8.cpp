#include <iostream>

int* allocateArray(){
	int* newArray = new int[4];
	newArray[0] = 1;	newArray[1] = 3;
	newArray[2] = 2;	newArray[3] = 10;
	return newArray;
}

int main(){
	int* newArray = allocateArray();
	std::cout << newArray[3] << std::endl;
	delete [] newArray;
	return 0;
}