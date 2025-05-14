#include <iostream>
#include <string>
using namespace std;

class person{
	private:
		int age;
		string name;
	public:
		void setName(string yourName){
			name = yourName;
		}
		void setAge(int yourAge){
			age = yourAge;
		}
		void getDetails(){
			cout << "Your Name Is " << name << endl;
			cout << "Your Age Is " << age << endl;
		}
};

int main(){
	person person1, person2;
	
	person1.setName("Panos");
	person1.setAge(59);
	
	person2.setName("Mairy");
	person2.setAge(28);
	
	person1.getDetails();
	person2.getDetails();
}