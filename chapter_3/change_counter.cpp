#include "../std_lib_facilities.h"

double calculate_change(int pennies, int nickels, int dimes, int quarters, int half_dollars, int dollars) {

	double total = 0.0;

	// safe conversions since the amount of memory set aside for a double > 
	// the amount of memory set aside for an int.
	double half_dollars_d = 0.0; 
	half_dollars_d = half_dollars;

	double quarters_d = 0.0;
	quarters_d = quarters;

	double dimes_d = 0.0;
	dimes_d = dimes;

	double nickels_d = 0.0;
	nickels_d = nickels;

	double pennies_d = 0.0;
	pennies_d = pennies;

	total += dollars;
	total += (half_dollars_d / 2);
	total += (quarters_d / 4);
	total += (dimes_d / 10);
	total += (nickels_d / 20);
	total += (pennies_d / 100);

	return total;

}

int main() {

	int pennies = 0;
	cout << "How many pennies do you have? ";
	cin >> pennies;

	int nickels = 0;
	cout << "How many nickels do you have? ";
	cin >> nickels;

	int dimes = 0;
	cout << "How many dimes do you have? ";
	cin >> dimes;

	int quarters = 0;
	cout << "How many quarters do you have? ";
	cin >> quarters;

	int half_dollars = 0;
	cout << "How many half dollars do you have? ";
	cin >> half_dollars;

	int dollars = 0;
	cout << "How many dollars do you have? ";
	cin >> dollars;

	if (pennies > 1 || pennies == 0) {
		cout << "\nYou have " << pennies << " pennies.";
	} else if (pennies == 1) {
		cout << "\nYou have " << pennies << " penny.";
	}

	if (nickels > 1 || nickels == 0) {
		cout << "\nYou have " << nickels << " nickels.";
	} else if (nickels == 1) {
		cout << "\nYou have " << nickels << " nickel.";
	}

	if (dimes > 1 || dimes == 0) {
		cout << "\nYou have " << dimes << " dimes.";
	} else if (dimes == 1) {
		cout << "\nYou have " << dimes << " dime.";
	}

	if (quarters > 1 || quarters == 0) {
		cout << "\nYou have " << quarters << " quarters.";
	} else if (quarters == 1) {
		cout << "\nYou have " << quarters << " quarter.";
	}

	if (half_dollars > 1 || half_dollars == 0) {
		cout << "\nYou have " << half_dollars << " half_dollars.";
	} else if (half_dollars == 1) {
		cout << "\nYou have " << half_dollars << " half dollar.";
	}

	if (dollars > 1 || dollars == 0) {
		cout << "\nYou have " << dollars << " dollars.\n";
	} else if (dollars == 1) {
		cout << "\nYou have " << dollars << " dollar.\n";
	}

	double total = 0.0;

	total = calculate_change(pennies, nickels, dimes, quarters, half_dollars, dollars);

	cout << "The value of all your money is $" << total << ".\n";

	return 0;
}
