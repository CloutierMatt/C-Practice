#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main ( void )
{
	cout << "Please Enter Your Name:";
	string name;
	
	cin >> name;

	string greeting = "Hello, " + name + "!";

	string spaces(greeting.size(), ' ');
	string second ="*" + spaces + '*';

	string first(second.size(), '*');
	
	const int pad = 1;
	const int rows = pad * 2 + 3;

	cout <<'\n';

	string::size_type cols = greeting.size() + pad * 2 + 2; 

	for ( int r = 0; r != rows; ++r ) {

	string::size_type c = 0;

		while ( c != cols ) {
			if ( r == 0 || r == rows - 1 || c == 0 || c == cols - 1 ) {
				cout << "*";
			} else {
				if ( r == pad + 1 && c == pad + 1 ) {
					cout << greeting;
					c += greeting.size();
				} else {
					cout << " ";
				}	
			}
		}
	}
	return 0;
}
