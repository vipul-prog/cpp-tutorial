/* 2. Example */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream myfile;
	myfile.open("example.txt", ios::out | ios::app);
	myfile << "Next Line in app or append mode using ios::app";
	myfile.close();
}
