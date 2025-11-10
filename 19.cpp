#include <iostream>

class Account{
	protected:
		int funds = 0;
	public:
		Account(): funds(100){}
};

class SpecialAccount : protected Account {
	void printFunds(){ std::cout << funds << std::endl;}
};

int main(){
	SpecialAccount a;
	return 0;
}