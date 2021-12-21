#include <iostream>

using namespace std;

int main()
{
	int a[] = {1,2,3};
	int * mypointer;
	mypointer = a;
	cout << "Pointer of a[0] = " << mypointer << "\n";
	cout << "After Adding " << mypointer + 1 << "\n";
}
