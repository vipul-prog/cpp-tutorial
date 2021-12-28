#include <iostream>

using namespace std;

int addition (int a, int b)
{
	return (a+b);
}

int substraction(int a, int b);
int operation (int x, int y, int (*functocall)(int,int)) {
	int g;
	g = (*functocall)(x,y);
	return (g);
}



int main () {

	int a = 1;
	int b = 2;

	cout << addition(a,b) << "\n";
	cout << substraction(a,b) << "\n";
	cout << "With operation " << operation(a,b,substraction) <<"\n";
}

int substraction (int a, int b) {
	return (a-b);
}


