#include <iostream>

class Character {
	protected:
		int health = 1;
	public:
		Character():health(100){}
		virtual void print() { std::cout << health << std::endl; }
};

class Enemy : public Character{
	private:
		double attackPower = 2.0;
	public:
		Enemy():attackPower(3){}
		void print() { std::cout << health+attackPower << std::endl; }
};

int main(){
	Character* destroyer = new Enemy();
	destroyer->print();
	return 0;
}