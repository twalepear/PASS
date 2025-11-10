#include <iostream>

class User{
	public:
		std::string name = "";
	public:
		User(): name("Default"){}
		void setName(std::string name) {this->name=name; }
};

int main(){
	User* a = new User();
	a->setName("Def Alt");
	std::cout << a->name << std::endl;
	return 0;
}