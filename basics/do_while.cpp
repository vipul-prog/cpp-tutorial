#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	do {
		cout << "Enter Text: ";
		getline (cin, str);
		cout << "You Entered: " << str << "\n";
	} while (str != "goodbye");
}
