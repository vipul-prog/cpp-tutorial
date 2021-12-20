#include <iostream>


using namespace std;

int main() {
	int foo [] = {1,2,32,1};
	char aoo [] = "Hello";
	string name = "Vipul";	
	for (char elem : aoo) cout << elem << "\n";
	for (char elem : name) cout << elem << "\n";

	int i = 2;
	i = 3;

	string a = "bye";
	a = "ji";

	cout << i << " " << a;
}

