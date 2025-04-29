#include <iostream>

using namespace std;

int main(){
	int table[5] = {4,7,1,9,2};
	int min,max,add,i;
	min = table[0];
	max = table[0];
	for (i=0;i<5;i++){
		add = add + table[i];
		if (table[i] > max){
			max = table[i];
		}
		if (table[i] < min){
			min = table[i];
		}
	}
	cout << "To athrisma einai: " << add << "\n";
	cout << "To max einai: " << max << "\n";
	cout << "To min einai: " << min << "\n";
}