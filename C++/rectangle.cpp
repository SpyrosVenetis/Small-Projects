#include <iostream>

using namespace std;

class rectangle {
	private:
		double length;
		double width;
	public:
		void setLenght(double cm);
		void setWidth(double cm);
		double getApo();
		double calper();
};

int main(){
	rectangle obj;
	obj.setLenght(5.0);
	obj.setWidth(5.0);
	cout << obj.getApo() << "\n";
	cout << obj.calper();
}

void rectangle::setLenght(double cm){
	length = cm;
}

void rectangle::setWidth(double cm){
	width = cm;
}

double rectangle::getApo(){
	return length * width;
}

double rectangle::calper(){
	return (length * 2) + (width * 2);
}