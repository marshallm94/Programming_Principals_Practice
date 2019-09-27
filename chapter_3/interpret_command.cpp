#include "../std_lib_facilities.h"

int main() {
	cout << "Enter an operator and two numbers to use that operator on (separated by spaces)"
		 << "\n--> ";

	string operation = "??";
	double x = 0.0;
	double y = 0.0;

	cin >> operation >> x >> y;

	double out = 0.0;
	if (operation == "+" || operation == "plus") {
		out = x + y;
	} else if (operation == "-" || operation == "minus") {
		out = x - y;
	} else if (operation == "*" || operation == "mul") {
		out = x * y;
	} else if (operation == "/" || operation == "div") {
		out = x / y;
	}

	cout << out << " is the result.\n";

	return 0;
}
