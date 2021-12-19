#include <iostream>

using namespace std;

int foo[] = {1,2,3,4,5,6,78};


int main() {
	int i,j = 0;
//	++i;
//	j++;
	for (int elem : foo) cout << "The value " << elem << "\n";

}
