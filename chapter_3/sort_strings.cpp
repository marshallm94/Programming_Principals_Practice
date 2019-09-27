#include "../std_lib_facilities.h"


int main() {

	string a = "??";
	string b = "??";
	string c = "??";

	cout << "Enter a string: ";
	cin >> a;
	
	cout << "Enter another string: ";
	cin >> b;

	cout << "Enter a third string: ";
	cin >> c;

	if (a <= b) {
		if (c <= a) {
			cout << "sorted: " << c << ',' << a << ',' << b << '\n';
		} else if (c > b) {
			cout << "sorted: " << a << ',' << b << ',' << c << '\n';
		} else if (c > a) {
			cout << "sorted: " << a << ',' << c << ',' << b << '\n';
		} 
	} else if (a > b) {
		if (c >= a) {
			cout << "sorted: " << b << ',' << a << ',' << c << '\n';
		} else if (c < b) {
			cout << "sorted: " << c << ',' << b << ',' << a << '\n';
		} else if (c < a) {
			cout << "sorted: " << b << ',' << c << ',' << a << '\n';
		}
	}
	
	return 0;
}
