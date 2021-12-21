#include <iostream>

using namespace std;

int addition (int a, int b)
{
	return (a+b);
}

int substraction(int a, int b);

int main () {

	int a = 1;
	int b = 2;

	cout << addition(a,b) << "\n";
	cout << substraction(a,b) << "\n";
}

int substraction (int a, int b) {
	return (a-b);
}


