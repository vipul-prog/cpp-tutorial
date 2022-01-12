/* Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,...,n.*/

#include <iostream>

using namespace std;

int range_multiplier(int n);
int range_summation(int n);

int main() {
	int resp;
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Choose \n1. for Addition \n2. for Multiplication" << endl;
	cin >> resp;

	
	if (resp == 1) {
		cout << "Summation from 1...." << n << " is " << range_summation(n) << endl;
	}
	else if (resp == 2) {
		cout << "Multiplication from 1..." << n << " is "<< range_multiplier(n) << endl;
	}
	else {
		cout << "\n ----Invalid Input---- \nExiting"<<endl;
	}
}

int range_multiplier(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n*range_multiplier(n-1);
	}
}

int range_summation(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + range_summation(n-1);
	}
}

