#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;


int main() {
	cout<< "Please enter your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	cout << "Please enter your midterm & final exam grades. ";
	double midterm, final;
	cin >> midterm >> final;

	cout << "Enter all your homework grades, " 
			"followed by the end of line: ";

	int count = 0;
	double sum = 0;
	double x;

	//Invariant 1: read "count" grades so far. 
	//Invariant 2: "sum" is the running total of the "count" grades.
	while (cin >> x) {
		++count; //count = 1
		sum += x;
	}

	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(4)
		 << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		 << setprecision(prec) << endl; //resetting the precision!

	return 0;




}