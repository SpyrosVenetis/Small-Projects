#include <iostream>
#include <cmath>
using namespace std;

class circle{
	private:
		float radious, pi = 3.14, area;
	public:
		void setRadious(float R){
			radious = R;
		}
		void setArea(){
			area = pi * pow(radious,2);
		}
};

class cylinder:public circle{
	private:
		float radious, pi = 3.14, area, height;
	public:
		void setHeight(float H){
			height = H;
		}
		void calculateCylinder(){
			cout << "The Cylinder Is: " << height * area << endl;
		}
};