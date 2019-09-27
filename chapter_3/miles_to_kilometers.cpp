#include "../std_lib_facilities.h"

int main() {
	cout << "Enter the number of miles to convert: ";
	double miles = 0.0;
	cin >> miles;

	double km = 0.0;
	km = miles * 1.609;

	cout << '\n' << miles << " miles = " << km << " kilometers.\n";

	return 0;
}
