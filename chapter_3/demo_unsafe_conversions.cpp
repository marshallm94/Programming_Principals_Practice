#include "../std_lib_facilities.h"

int main() {
	double d = 0;

	while (cin >> d) { // insert into the memory block allocated for d (double)
					   // the input from standard input.

		int i = d; // try to squeeze a double (d) into a memory block of 'int' size
		char c = i; // try to squeeze a int (i) into a memory block of 'char' size
		int i2 = c; // get the integer value of the char
		cout << "d==" << d // the original double
			 << " i==" << i // converted to int
			 << " i2== " << i2 // int value of char
			 << " char(" << c << ")\n"; // the char
	}

	return 0;
}
