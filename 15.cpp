#include <iostream>

class User{
	private:
		std::string name;
	public:
		User(): name("Default"){ std::cout << name << std::endl; }
};

class Client {
	private:
		User* a;
};

int main(){
	Client b;
	return 0;
}