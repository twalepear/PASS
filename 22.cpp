#include <iostream>

class Character {
	protected:
		int health = 0;
	public:
		Character():health(100){}
		void print() { std::cout << health << std::endl; }
};

class Enemy : public Character{
	private:
		double attackPower = 0.0;
	public:
		Enemy():attackPower(6){}
		void print() { std::cout << health+attackPower << std::endl; }
};

int main(){
	Character* destroyer = new Enemy();
	destroyer->print();
	return 0;
}