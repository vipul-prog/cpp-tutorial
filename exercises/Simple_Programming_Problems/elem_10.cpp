/* Write a program that prints the next 20 leap years. */

#include <iostream>

using namespace std;

bool is_leap(int year) {
	if ( year % 100 == 0 )
	{
		if ( year % 400 == 0) {
			return true;
		}
	} else if ( year % 4 == 0) {
		return true;
	}
	return false;
}


int main() {
	int start_year, no_of_year;

	cout << "Enter the start year: ";
	cin >> start_year;
	cout << "Enter the no. of leap years to print: ";
	cin >> no_of_year;
	int count = 0;
	
	do {
		if (is_leap(start_year)) {
			cout << start_year << "; ";
			count = count + 1;
		}
		start_year = start_year + 1;
	} while (count != no_of_year);

}
