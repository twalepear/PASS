#include <iostream>

using namespace std;

void addOnetoX(int * p){ // p is a pointer to an integer
	*p = *p + 1; // dereference p to get the integer value and add 1
}

int main() {
	int x = 100; // x is an integer variable
	addOnetoX(&x); // pass the address of x to the function
	cout << x << endl; // should print 101
	return 0;
}