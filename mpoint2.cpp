#include <iostream>


using namespace std;

int main() {
	int firstValue = 5, secondValue = 15;
	int * p1, * p2;

	p1 = &firstValue;
	p2 = &secondValue;

	*p1 = 10;
	*p2 = *p1;

	p1 = p2;
	*p1 = 20;

	cout << "firstValue" << firstValue << "\n";
	cout << "secondValue" << secondValue << "\n";
}
