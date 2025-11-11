#include <iostream>
#include <vector>
#include "Chest.h"

Chest JadeChest;
Chest AmberChest;

void Jade(){
	int a = 7;
	int* b = &a;
	int** c = &b;

	JadeChest.x = **c;
	JadeChest.y = 5;

	std::cout << JadeChest.x << std::endl; // 7
	std::cout << JadeChest.y << std::endl; // 5
}

void Amber(){
	int a = 7;
	int b = 2;
	int c = 1;

	int* d = &a; // *d = 7
	int* e = &b; // *e = 2
	int** f = &e; // **f = 2
	e = &c; // *e = 1

	AmberChest.x = JadeChest.x - **f; // 7 - 1 = 6
	AmberChest.y = *(e-1) - 1;

	std::cout << AmberChest.x << std::endl; // 6
	std::cout << AmberChest.y << std::endl; // 1
}

void Ruby(){
	int a = 7;
	int b = 4;
	int c = 1;

	int* d = &a + 1; // *d = 4
	int* e = &b; // *e = 4
	int f = *(e - 1); // f = 7

	Chest RubyChest;
	RubyChest.x = f;
	RubyChest.y = AmberChest.y - *d + 2;

	std::cout << RubyChest.x << std::endl; // 7
	std::cout << RubyChest.y << std::endl; // -1
}

int main() {
	Jade();
	Amber();
	Ruby();
	return 0;
}