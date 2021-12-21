#include <iostream>

using namespace std;


int main() {

	int * pointer1;
	int var = 12;
	pointer1 = &var;
	*pointer1 = 23;

	cout << var<<"\n";

}
