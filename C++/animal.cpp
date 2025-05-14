#include <iostream>
using namespace std;

class animal{
	public:
		void eat(){
			cout << "I Can Eat" << endl;
		}
		void sleep(){
			cout << "I Can Sleep" << endl;
		}
};

class dog:public animal{
	public:
		void bark(){
			cout << "Woof Woof" << endl;
		}
};
int main(){
	dog dog1;
	
	dog1.eat();
	dog1.sleep();
	dog1.bark();
	return 0;
}