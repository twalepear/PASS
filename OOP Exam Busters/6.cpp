#include <iostream>

using namespace std;

int main(){
	int* a = new int[3];
	int* b;

	for (int i = 0; i < 3; i++){
		a[i] = i + 1;
	}

	b = a;

	for (int i = 0; i < 3; i++){
		cout << b[i] << " ";
	}
	return 0;
}