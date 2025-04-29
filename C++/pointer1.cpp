#include <bits/stdc++.h>
using namespace std;

int main(){
	int var = 20;
	int *ptr = &var;
	
	cout << "value in var: "<< var << "\n";
	cout << "value in pointer ptr: "<< ptr << "\n";
	cout << "value in *ptr: "<< *ptr << "\n";
	
	*ptr = 40;
	cout << "var value after *ptr changed it: " << var;
}