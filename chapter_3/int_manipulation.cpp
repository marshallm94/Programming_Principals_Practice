#include "../std_lib_facilities.h"

int main() {
	cout << "Enter an integer: ";
	int val1 = 0;
	cin >> val1;

	cout << "Enter another integer: ";
	int val2 = 0;
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
		 << '\n' << val1 << " - " << val2 << " = " << val1 - val2;

	double d1 = val1; // converting val1 and val2 (int's) to double's won't
	double d2 = val2; // result in the "narrowing" affect and is therefore a
					  // safe conversion.

	cout << "\n" << val1 << " / " << val2 << " = " << d1 / d2 << '\n';

	return 0;

}
