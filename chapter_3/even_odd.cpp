#include "../std_lib_facilities.h"

int main() {
	cout << "Enter an integer: ";
	int x = 0;
	cin >> x;

	if (x % 2 == 0) {
		cout << "The value "<< x << " is an even number.\n";
	} else if (x % 2 != 0) {
		cout << "The value " << x << " is an odd number.\n";
	}

	return 0;
}
