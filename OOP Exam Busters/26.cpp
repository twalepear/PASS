#include <iostream>

using namespace std;

class Helper{
	public:
		static void StaticFunction(){
			cout << "Hi I am a class function." << endl;
		}
	private:
		int x = 5;
};

int main(){
	Helper::StaticFunction();
	return 0;
}