#include <iostream>

class Point2D{
	protected:
	int x = 0;
	int y = 2;
};

int main(){
	Point2D point;
	point.x = 10;
	std::cout << point.x << std::endl;
	return 0;
}