#include <iostream>

class Account{
	protected:
		float interestRate = 3.0;
	public:
		Account(){ std::cout << interestRate << " "; }
};

class SpecialAccount : protected Account {
	public:
		SpecialAccount(){ std::cout << interestRate + 0.4 << " "; }
};

class RestrictedAccount : private SpecialAccount {
	public:
		RestrictedAccount(){ std::cout << interestRate + 0.2 << " "; }
};

int main(){
	RestrictedAccount a;
	return 0;
}