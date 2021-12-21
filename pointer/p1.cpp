#include <iostream>

using namespace std;


int main() 
{
	int numbers[5];
	int * p;
	p = numbers;

	for (int elem : numbers) cout << elem << "\n";

	*p = 10;
	p++;
	*p = 11;
	++p;
	*p = 12;

	numbers[1] = 90;

	*(p+1) = 14;
	cout << "\n Initial Adress of the array" << p <<"\n";

	for (int elem : numbers) cout << elem << "\n";
}
