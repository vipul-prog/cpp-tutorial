#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string str {"hello"};
	for (char c: str)
	{
		cout << "[" << c << "]";
	}
	cout << "\n";
}
