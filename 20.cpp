#include <iostream>

class Account{
	private:
		int funds = 0;
	public:
		Account(): funds(2000){}
};

class SpecialAccount : private Account { // cannot call the Account constructor from SpecialAccount a
	public:	
		void printFunds(){ std::cout << funds << std::endl;}
};

int main(){
	SpecialAccount a;
	return 0;
}