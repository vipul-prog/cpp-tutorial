#include <iostream>

using namespace std;

int main() {
	int foo [5];

	foo[0] = 1;
	

	for (int i = 0; i <= 4 ; i += 1) {
		cout << "I" << i << "   " <<foo[i] << "\n";
	}

}

