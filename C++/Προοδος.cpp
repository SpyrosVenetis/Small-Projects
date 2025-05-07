#include <iostream>
#include <cmath>
using namespace std;

class circle{
	private:
		float radius, pi = 3.14;
	
	public:
		float calculateArea(float R){
			radius = R;
			return pi * pow(radius,2);
		}
		float calculateCircumference(float R){
			radius = R;
			return 2 * pi * R;
		}
		
};

int main(){
	float radius;
	circle shape;
	
	cout << "Give the radius of the circle: ";
	cin >> radius;
	
	cout << "The Area Of The Cirlce Is: " << shape.calculateArea(radius) << "\n";
	cout << "The Circumference Of The Circle Is: " << shape.calculateCircumference(radius) << "\n";
	
	return 0;
}