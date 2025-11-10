#include <iostream>

class User{
	protected:
		std::string name = "";
	public:
		User(): name("Default"){}
		void setName(std::string name) {this->name=name; }
};

int main(){
	User a;
	a.setName("Hace Gropper");
	std::cout << a.name << std::endl;
	return 0;
}