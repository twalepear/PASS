#include <iostream>

class User{
	private:
		std::string name = "Name not set";
	public:
		User(): name("Default"){ std::cout << name << std::endl; }
};

class Client {
	private:
		User myUser;
	public:
		Client(){}
};

int main(){
	Client myClient;
	return 0;
}