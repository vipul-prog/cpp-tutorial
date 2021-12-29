#include <iostream>

using namespace std;

class Rectangle {
	int width, height;
	public:
	Rectangle();
	Rectangle(int, int);
	Rectangle(int);
	int area() 
	{
		return width*height;
	}
};

Rectangle::Rectangle() {
	width = 4;
	height = 3;
}

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
}

Rectangle::Rectangle(int a) {
	width = a;
	height = 9;
}

int main() {
	Rectangle recta, rectb(5,6), rectc(8);
	cout << "recta: "<< recta.area() << endl;
	cout << "rectb: "<< rectb.area() << endl;
	cout << "rectc: "<< rectc.area() << endl;
}

