#include <iostream>

using namespace std;

int max(int num1, int num2);

int main() {
	int num1, num2;
	cout << "Dwse ton prwton arithmo: ";
	cin >> num1;
	cout << "Dwse ton deutero arithmo: ";
	cin >> num2;
	
	cout << max(num1,num2); 
}

int max(int num1, int num2) {
	if (num1 >= num2){
		return num1;
	}
	else {
		return num2;
	}
}