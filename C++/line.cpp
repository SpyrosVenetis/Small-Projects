#include <iostream>
using namespace std;
class rectangle {
	public:
		rectangle(double H, double W);
		void setWidth(double W)
		getWidth(double);
		getHeight(double);
	private:
		double height, width;
};

rectangle::rectangle(double H, double W){
	height = H;
	width = W;
}

rectangle::getWidth(){
	return width;
}

rectangle::getHeight(){
	return height;
}

int main(){
	rectangle obj;
	obj.rectangle(5,5);
}