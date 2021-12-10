#include <iostream>

using namespace std;

int main() {
	
	int pre = 9;
	int mid = 0;
	int post = 9;

	int count = 0;
	int lines = 0;

	for (pre = 9, mid = 0, post = 9; pre >= 0, mid <= 18, post >= 0; pre = pre -1, mid = mid + 2, post = post -1)
	{
		count = 0;
		do {
			cout << " ";
			count = count + 1;
		} while (count <= pre);

		count = 0;
		cout << "*";

		while (count < lines *2) {
			cout << " ";
			count = count + 1;
		}

		cout << "*";
		count = 0;

		do {
			cout << " ";
			count = count + 1;
		} while (count <= pre);
		lines = lines + 1;
		cout << "\n";


	}
}
