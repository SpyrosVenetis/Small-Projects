#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;


class Circle{
	private:
		float aktina;
	public:
		float area(){
			return PI * pow(aktina,2);
		}
		void set_r(float r){
			aktina = r;
		}
		float get_r(){
			return aktina;
		}
};
	
class Cylinders: public Circle{
	private:
		float height;
	public:
		void set_height(float H){
			height = H;
		}
		float calc_cyl(){
			return area() * height;
		}
};

int main(){
	Cylinders Object;
	float r, height;
	
	cout << "Dwste thn aktina tou kyklou tou kylindrou ";
	cin >> r;
	
	Object.set_r(r);
	
	cout << "Dwste to ypsos tou kylindroy ";
	cin >> height;
	
	Object.set_height(height);
	
	cout << "O kylindros einai: " << Object.calc_cyl() << endl;
}