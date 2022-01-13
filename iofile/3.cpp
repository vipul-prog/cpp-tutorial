/* Example 3. */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream myfile;
	myfile.open("newfile.txt", ios::app);
	myfile << "This is a new file \n";
	myfile.close();
}

