#include "../std_lib_facilities.h"

int main() {
	int start = 100;
	cout << "Enter a number at which to terminate the fizzbuzz process: ";
	cin >> start;

	int counter = 1;
	while (counter <= start) {
		if (counter % 15 == 0) {
			cout << counter << " is a multiple of fizzbuzz.\n";
		} else if (counter % 5 == 0) {
			cout << counter << " is a multiple of fizz.\n";
		} else if (counter % 3 == 0) {
			cout << counter << " is a multiple of buzz.\n";
		} else {
			cout << counter << " is uninteresting right now.\n";
		}
		counter++;
	}
	return 0;
}
