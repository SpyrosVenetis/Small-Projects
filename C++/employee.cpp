#include <iostream>
#include <string>
using namespace std;

class employee{
	private:
		string name;
		int id;
		double salary;
	public:
		void setName(string N){
			name = N;
		}
		void setId(int ID){
			id = ID;
		}
		void setSalary(double S){
			salary = S;
		}
		
		void calcSal(double per){
			if (per >= 1 and per <= 1.5){
				salary *= per;
			}
			else{
				cout << "Please type a number from 1 to 1.5" << endl;
			}
		}
};