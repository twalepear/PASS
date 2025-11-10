#include <iostream>

void modify(int* arr, int index, int value){
	arr[index] = value;
}

int main(){
	int nums[3] = {50, 100, 150};
	modify(nums, 1, 20);
	std::cout << nums[0] << "," << nums[1] << std::endl;
	return 0;
}