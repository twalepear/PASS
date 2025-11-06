#include <iostream>

using namespace std;

class GameObject{
	public:
		GameObject(){
			gameObjectCount++;
		}
		int getObjectCount(){
			return gameObjectCount;
		}
	private:
		static int gameObjectCount;
};

int GameObject::gameObjectCount = 0;

int main(){
	GameObject g1;

	GameObject* g2;

	cout << g1.getObjectCount() << endl;
	return 0;
}