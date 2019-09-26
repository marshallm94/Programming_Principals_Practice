#include "../std_lib_facilities.h"

// Shows the various ways to write if-statements
int main() {
	int x = 12;

	if (x % 2 == 0) cout << x << " is even.\n";

	if (x % 3 == 0)
		cout << x << " is a multiple of 3.\n";

	if (x % 4 == 0) {
		cout << x << " is a multiple of 4.\n";
	}

	return 0;

}
