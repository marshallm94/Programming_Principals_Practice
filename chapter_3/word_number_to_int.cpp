#include "../std_lib_facilities.h"

int main() {

	cout << "Enter a spelled out number between 1 and 4: ";
	string a = "???";
	cin >> a;

	int x = 0;
	if (a == "zero") {
		x = 0;	
	} else if (a == "one") {
		x = 1;
	} else if (a == "two") {
		x = 2;
	} else if (a == "three") {
		x = 3;
	} else if (a == "four") {
		x = 4;
	} else {
		simple_error("I haven't heard of that before.");
	}

	cout << x << " is the numeral of the number you entered.\n";

	return 0;

}
