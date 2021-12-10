#include <iostream>

using namespace std;

int main() {
	int count, count1 = 0;
	for (int n = 0; n<11 ; n++ ) {
		if (n<=5)
		{
			do {
				cout << " ";
				count1 = count1 + 1;
			} while (count1 <= 5-n);

			count1 = 0;
			cout << "*";
			count = 0;
			do {
				cout << " ";
				count = count + 1;
			} while (count < n );
			cout << "* \n";
		} else {

			count1 = 0;
			do {
				cout << " ";
				count1 = count1 + 1;
			} while (count1 <= n-5);


			cout << "*";
			count = 0;
			do {
				cout << " ";
				count = count + 1;
			} while (count < (11-n));
			cout << "* \n"; 
		}

	}
	cout << "liftoff \n";
}

