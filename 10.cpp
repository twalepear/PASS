#include <iostream>

struct Point2D{
	int x = 2;
	int y = 4;
};

int main(){
	Point2D point;
	point.x = 5;	point.y = 10;
	std::cout << point.x * point.y << std::endl;
	return 0;
}