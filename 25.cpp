#include <iostream>

class Player{
	public:
		virtual ~Player() { std::cout << "player- "; }
};

class Enemy : public Player {
	public:
		~Enemy() { std::cout << "enemy- "; }
};

int main(){
	Player* destroyer = new Enemy();
	delete destroyer;
	return 0;
}