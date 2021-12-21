#include <iostream>

using namespace std;

int main()
{
	int a = 23;
	int * point_a = &a;
	*point_a = 45;

	cout << a;
}


