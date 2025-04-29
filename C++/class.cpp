#include <iostream>

using namespace std;

class person {
	public:
		int age;
		string name;
		void introduce(){
			cout << "My name is " << name << " and I am " << age << " years old";
		}
};

int main(){
	person person1;
	int message;
	cout << "Onoma: ";
	cin >> person1.name;
	cout << "Hlikia: ";
	cin >> person1.age;
	
	person1.introduce();
}