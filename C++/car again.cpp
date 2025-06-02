#include <iostream>
#include <string>
using namespace std;

class car{
	private:
		string company,model;
		int year;
	public:
		car(string C, string M, int Y){
			company = C;
			model = M;
			year = Y;
		}
		void SetComp(string comp){
			company = comp;
		}
		void SetModel(string mod){
			model = mod;
		}
		void SetYear(int Y){
			year = Y;
		}
		string GetComp(){
			return company;
		}
		string GetModel(){
			return model;
		}
		int GetYear(){
			return year;
		}
};

int main(){
	car object1("Toyota", "Corolla", 1986), object2("Lamborghini","Huracan", 2014);
	
	cout << object1.GetComp() << " " << object1.GetModel() << " " << object1.GetYear() << endl;
	cout << object2.GetComp() << " " << object2.GetModel() << " " << object2.GetYear() << endl;
	
	object2.SetComp("Seat");
	object2.SetModel("Ibiza");
	object2.SetYear(1998);
	
	cout << object2.GetComp() << " " << object2.GetModel() << " " << object2.GetYear() << endl;
	
}