/* Write a program that prints all prime numbers.*/

#include <iostream>
#include <climits>

using namespace std;

bool is_prime(int n){
	if (n == 1)
	{
		return false;
	}

	for (int i=2; i<n; i+=1) {
		if ( n%i == 0) {
			return false;
		}
	}
	return true;
}


int main() {
	for (int i = 1; i <= INT_MAX; i += 1) {
		if (is_prime(i)) {
			cout << i<< ";";
		}
}
}
