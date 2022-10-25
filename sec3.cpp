#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;

int main ( void ) {
	cout << "Please enter your first name: ";
	string name;
	
	cin >> name;

	cout << "Hello, " << name << "!" << endl;
	cout << "Please enter your midterm and final exam grades: ";
	
	double midterm, fin;
	cin >> midterm, fin;
	
	cout << "Enter all your homework grades, "
		"followed by end-of-file: ";

	int count = 0;
	double sum = 0;

	double x;

	while (cin >> x) {
		++count;
		sum += x;
	}

	streamsize prec = cout.precision();
	cout << " Your Final grade is" << setprecision(3)
	<< 0.2 * midterm + 0.4 * fin + 0.5 * sum / count
	<< setprecision(prec) << endl;

	return 0;
}
	


