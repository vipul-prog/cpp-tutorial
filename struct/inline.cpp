#include <iostream>

using namespace std;

int main()
{
	int a = 2;
	int b = 3;
	inline int addition (int& a, int& b) {
		return a+b;
	}
	cout << addition(a,b);
