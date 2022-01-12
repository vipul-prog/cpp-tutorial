/* Write a guessing game where the user has to guess a secret number. After every guess the program tells the user whether their number was too large or too small. At the end the number of tries needed should be printed. It counts only one as one try if they input the same number multiple times consecutively.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main() {

	srand (time(NULL));

	int guess = rand() % 100;
	
	int count = 0;
	int number;
	int prev_number;
	cout << "Enter a Guess Number: " ;
	

	do {
	
	cin >> number;
	if (prev_number == number)
	{
		count = count;

	} else {
		count += 1;
	}
	prev_number = number;
	
	
	if (number < guess) {
		cout << "Your Guess was Less than the Secret Number" << endl;
		cout << "------------"<< endl << endl;
		cout << "Guess it again: " ;
	}
	else if (number > guess){ 
		cout << "Your Guess was More than the Secret Number"<< endl;
		cout << "------------"<< endl << endl;
		cout << "Guess it again: " ;

} else {
	cout << "You Got It Correct in "<< count << " Iterations!" << endl;

}


} while (number != guess);

}


