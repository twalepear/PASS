#include <iostream>
#define INDEX 0 // Anywhere INDEX appears, it will be replaced with 0 before compilation

template <int SIZE, typename T>
class myArray {
	public:
		T array[SIZE];
};

int main(){
	myArray<2, int> a;
	a.array[0] = 1;
	a.array[1] = 2;

	std::cout << a.array[INDEX] + a.array[INDEX + 1] << std::endl;
	return 0;
}