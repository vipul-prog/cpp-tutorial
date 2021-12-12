#include <iostream>

using namespace std;

long factorial (long a)
{
	if (a > 1) {
		return (a * factorial(a-1));
	} else {
		return 1;
	}
}

int main() {
	int a = -3;
	cout << factorial(a) << "\n";
}

