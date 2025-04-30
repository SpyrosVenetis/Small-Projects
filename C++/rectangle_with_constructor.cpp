#include <iostream>
using namespace std;

class rectangle {
	private:
		double height;
		double width;
	public:
		double getArea(){
			return height * width;
		}
		double getPar(){
			return (height * 2) + (width * 2);
		}
		rectangle (double H, double W){
			height = H;
			width = W;
		}
};

int main(){
	double height,width;
	
	cout << "Type the Height of the rectangle: ";
	cin >> height;
	cout << "Type the Width of the rectangle: ";
	cin >> width;
	
	rectangle shape(height,width);
	cout << "The Area Of the rectangle is " << shape.getArea() << "\n";
	cout << "The parameter of the rectangle is " << shape.getPar() << "\n";
}