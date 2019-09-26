#include "../std_lib_facilities.h"

int main() {
	int a = 2000; // initializing a with the value 2000
	char c = a; // initializing c as the char of "equal value" to a
	int b = c; // initializing b as the int of "equal value" to c
	if (a != b)
		// Since the memory allocated for a char is smaller than that
		// allocated for an int, "squeezing" the binary representation of the
		// integer 2000 into the smaller memory block won't be possible. So,
		// the int b is the number that represents what was able to be "squeezed"
		// into the memory block for the 'c' variable.
		cout << "oops!: " << a << " != " << b << '\n';
	else
		// If the below statement is printed, that means that the memory
		// allocated for the char 'c' is large enough to hold the bits/binary
		// representation of the integer 2000.
		cout << "Wow! we have large characters!\n";

	return 0;
}
