#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter a number with a decimal: ";

	// Using the below syntax (defining number1 without the initial value
	// = number) has the "common sense" effect when interacting with number and
	// number1 - incrementing number by 1 doesn't affect number1.

	double number;
	double number1;
	cin >> number;
	number1 = number;

	// However, using the below syntax (comment out above to test), doesn't
	// behave as expected - number gets assigned and incremented as expected,
	// however number1 get set to '6.95312e-310', regardless of what number is
	// set to number. Not sure what this is due to at the moment...

	// double number;
	// double number1 = number;
	// cin >> number;

	cout << "number == " << number << " and number1 == " << number1;

	number++;

	cout << "\nAfter performing 'number++', number == " << number
		 << " and number1 == " << number1
		 << '\n';

	cout << "\nn == " << number
		 << "\nn+1 == " << number+1
		 << "\nthree times n == " << number*3
		 << "\ntwice n == " << number*2
		 << "\nn squared == " << number*number
		 << "\nhalf of n == " << number/2
		 << "\nsquare root of n == " << sqrt(number)
		 << '\n';

	return 0;
}
