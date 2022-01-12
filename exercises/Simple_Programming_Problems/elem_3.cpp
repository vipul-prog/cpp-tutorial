/* Write a program such that
 * Users Bob and Alice are greeted with their name
 */

#include <iostream>

using namespace std;

int main() {
	// Declaring a variable to hold the name
	string name;
	cout << "Enter your name: ";
	cin >> name;
	if (name == "Alice" || name == "Bob") {
		cout << "Hello " << name << "!" << endl;
	}
}


