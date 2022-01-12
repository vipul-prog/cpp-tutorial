/* Write a program the prints a multiplication table for numbers up to 12.
 */

#include <iostream>


using namespace std;

int main(){
	for (int i=1; i<=12; i+=1)
	{
		for (int j=1; j<=10; j+=1)
		{
			cout << i << " X "<< j << " = " << i*j << endl;
		}
	cout << "-------" << endl;
	}
}

