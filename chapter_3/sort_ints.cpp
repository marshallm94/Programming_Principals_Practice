#include "../std_lib_facilities.h"

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Enter a number: ";
	cin >> a;
	
	cout << "Enter another number: ";
	cin >> b;

	cout << "Enter a third number: ";
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
