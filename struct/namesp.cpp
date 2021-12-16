#include <iostream>


using namespace std;

// Declaration of namespace foo
namespace foo 
{
	// Declaration of a function value() in the namespace
	int value() {
		return 5;
	}
}


// Declared namespace bar
namespace bar 
{
	// Declared a function value() as above with a constant
	const double pi = 3.1416;
	double value() {
		return 2*pi;
	}
}

int main() {
	// Accessing the value function from foo namespace foo
	cout << foo::value() << "\n";
	// Accessing the value function from the namespace bar
	cout << bar::value() << "\n";
	// Variable pi accessed using namespace bar
	cout << bar::pi << "\n";
return 0;
}

