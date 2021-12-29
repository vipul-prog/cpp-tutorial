#include <iostream>

using namespace std;

// Demonstrating use of constructors

class Rectangle {
	int width, height;
	public:
	Rectangle(int, int);
	int area() {
		return width*height;
	}
};

Rectangle::Rectangle (int a, int b) {
	width = a;
	height = b;
}

int main() {
	Rectangle rect(3,4);
	Rectangle rectb(5,6);
	cout << "Rectangle Area: " << rect.area() << endl;
	cout << "RectB Area: " << rectb.area() << endl;
	return 0;
}

