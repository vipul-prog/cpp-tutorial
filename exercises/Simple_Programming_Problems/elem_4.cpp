/* Write a program that asks the user for a number n and print the sum of the numbers 1 to n.
 */

#include <iostream>
#include <string>


using namespace std;


int recursive_addition(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + recursive_addition(n-1);
	}
}


int main() {
	int n;
	cout << "Enter a number for Recursive Addition: ";
	cin >> n;
	cout << endl;
	cout << recursive_addition(n) << endl;
}



