#include <iostream>

struct Point3D{
	int x = 0;
	int y = 0;
	int z = 0;
};

int main(){
	Point3D* point;
	point->x = 5;	point->y = 10;	point->z = 1;
	std::cout << point->x + point->y + point->z << std::endl;
	return 0;
}