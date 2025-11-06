#include <iostream>

using namespace std;

int main(){
	int *h = new int(2); // dynamically allocate an integer and initialize it to 2
	int x = 0; // regular integer variable

	std::cout << h << std::endl; // print the address stored in pointer h
	std::cout << &h << std::endl; // print the address of pointer h
	std::cout << &x << std::endl; // print the address of variable x

	delete h; // free the dynamically allocated memory

	return 0;
}