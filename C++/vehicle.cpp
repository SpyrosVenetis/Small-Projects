#include <iostream>
using namespace std;

class vechicle{
	public:
		vechicle(){
			cout << "This is a vehicle" << endl;
		}
};

class car:public vechicle{
	public:
		car(){
			cout << "This is a car" << endl;
		}
};

int main(){
	car obj;
	return 0;
}