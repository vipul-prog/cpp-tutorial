/* Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15, for n = 17
 */

#include <iostream>

using namespace std;

int recursive_addition(int n) {
	
	if (n%3 == 0) {
		return n + recursive_addition(n-1);
	}
	else if (n%5 == 0) {
		return n + recursive_addition(n-1);
	}
	else if(n > 1){
		return recursive_addition(n-1);
	}
	else {
		return 0;
	}

}


int main() {
	int n;
	cout << "Enter a No. of choice \n[Only multiple of 3 and 5 will we added] ";
	cin >> n;
	cout << recursive_addition(n);
	cout << endl;

}

