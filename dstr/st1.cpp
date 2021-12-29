#include <iostream>
#include <string>
#include <sstream>



using namespace std;

struct movies_t {
	string title;
	int year;
} films [3];

void printMovie(movies_t movie);




int main() {
	string mystr;
	int n;

	for ( n = 0; n <= 2; n++ )
	{
		cout << "Enter Title: ";
		getline (cin, films[n].title);
		cout << "Enter Year: ";
		getline (cin, mystr);
		stringstream(mystr) >> films[n].year;
	}
	
	cout << "\nYou have entered these movies: \n";
	for (n = 0; n<=2; n++)
	{
		printMovie(films[n]);
		
	}
	return 0;

}

void printMovie(movies_t movie)
{
	cout << movie.title;
	cout << " ( " << movie.year << ") \n";
}



