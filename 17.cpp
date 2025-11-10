#include <iostream>

class User{
	private:
		std::string name = "";
	public:
		User(): name("Default"){}
		void setName(std::string name) {this->name=name; }
		std::string getName() {return name; }
};

class PowerUser : public User {
	PowerUser() { std::cout << name << ',';}
};

int main(){
	PowerUser b;
	b.setName("Jeeves Sobs");
	std::cout << b.getName() << std::endl;
	return 0;
}