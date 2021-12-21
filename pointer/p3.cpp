#include <iostream>


using namespace std;


int main() {
	char a = 'z';
	char * b = &a;
	char ** c = &b;

	cout <<"A = " << a << "\n";
	cout <<"B = " << b << "\n";
	cout <<"C = " << c << "\n";
}


