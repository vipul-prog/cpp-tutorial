#include <iostream>
#include <string>


using namespace std;

void concatfun(string& vara, string& varb) {
	vara = vara+varb;
}



int main() {
	string a = "Vipul";
	string b = "Anand";
	cout << "1 " << a << b << "\n";
	concatfun(a,b);
	cout << "2" << a << b << "\n";
}

