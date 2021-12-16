#include <iostream>

using namespace std;

// Teh main Function
int main() {
	// Declaring the Outer Scope Variables
	int x = 20;
	int y = 50;

	{
		// inner Block Variable y declared
		/* Since the variable y has been declared in the inner block
		 * its scope is going to be in inner block only 
		 * thus changing the value of variable x access the global
		 * variable x and modifies it */
		int y;
		y = 10;
		x = 10;
		cout << "Inner Scope \n";
		cout << "X is : " << x << "\nY is : " << y;
	}
	cout << "\n Global Scope \n";
	cout << "\nX is : " << x << "\nY is : " << y << "\n";
}


