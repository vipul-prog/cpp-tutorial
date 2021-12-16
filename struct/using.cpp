#include <iostream>

using namespace std;

// Declared 2 namespaces with same variables inside
namespace first 
{
	int i = 0;
	int j = 1;
}

namespace second
{
	int i = 2;
	int j = 3;
}


// Declaring a printer funcitn
void p(string str) {
	if (str == "first"){
		// Using namespace in this block
		using namespace first;
		cout << i;
		
	} else {
		using namespace second;
		cout << i;
	}
	
//	cout << "Using Namespace " << str <<"\n";
//	cout << j << "\n";
}


int main() {
	
	p("second");
	cout << "using first "<< first::i << "\n";

	{
		using namespace first;
		cout << "Again"<< i ;
	}

//	cout << "\n"<< i;
}
