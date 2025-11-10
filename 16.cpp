#include <iostream>

class User{
	protected:
		std::string name = "";
	public:
		User(): name("Default"){}
		void setName(std::string name) {this->name=name; }
		std::string getName() {return name; }
};

int main(){
	User a;
	a.setName("Def Alt");
	std::cout << a.setName() << std::endl;
	return 0;
}