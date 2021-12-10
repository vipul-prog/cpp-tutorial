#include <iostream>

using namespace std;


void change(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}



int main() 
{
	int a = 8;
	int b = 9;
	cout << "A is "<< a << " B is " << b;
	cout << "\n";	
	change(a,b);
	cout << "A is "<< a<< " B is " << b;
}

