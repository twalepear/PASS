#include <iostream>

class Player{
	public:
		~Player() { std::cout << "player- "; }
};

class Enemy : public Player {
	public:
		~Enemy() { std::cout << "enemy- "; }
};

int main(){
	Player* destroyer;
	return 0;
}