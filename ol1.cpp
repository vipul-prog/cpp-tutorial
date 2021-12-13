#include <iostream>

using namespace std;

int oper (int a , int b) {
	cout << "One from Integer \n";
	return a+b;
}

double oper(double a, double b) {
	cout << "One from Double \n";
	return a+b;
}


int main () {
	double a = 2.1;
	double b = 3.2;
	oper(a,b);
}
