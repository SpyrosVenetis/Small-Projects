#include <iostream>

using namespace std;

class shape{
	public:
		void setHeight(int H){
			height = H;
		}
		void setWidth(int W){
			width = W;
		}
	protected:
		int height;
		int width;
};

class rectangle: public shape{
	public:
		int getRect(void){
			return width * height;
		}
};

int main(){
	rectangle Rect;
	
	Rect.setHeight(5);
	Rect.setWidth(7);
	
	cout << "Total area: " << Rect.getRect();
}