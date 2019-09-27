#include "../std_lib_facilities.h"

int main() {
	cout << "Enter an floating-point number: ";
	double val1 = 0.0;
	cin >> val1;

	cout << "Enter another floating-point number: ";
	double val2 = 0.0;
	cin >> val2;

	if (val1 < val2) {
		cout << '\n' << val1 << " < " << val2;
	} else if (val1 > val2) {
		cout << '\n' << val1 << " > " << val2;
	} else if (val1 == val2) {
		cout << '\n' << val1 << " == " << val2;
	}

	cout << '\n' << val1 << " * " << val2 << " = " << val1 * val2
		 << '\n' << val1 << " + " << val2 << " = " << val1 + val2
		 << '\n' << val1 << " - " << val2 << " = " << val1 - val2
		 << "\n" << val1 << " / " << val2 << " = " << val1 / val2 << '\n';

	return 0;

}
