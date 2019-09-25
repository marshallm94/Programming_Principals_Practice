#include "../std_lib_facilities.h"

double years_to_months(double years) {
	int months = years * 12;
	return months;
}

int main() {
	cout << "Please enter your name and age\n--> ";

	string name = "??";
	double age = 0;
	cin >> name >> age;

	double age_in_months = 0;
	age_in_months = years_to_months(age);

	cout << "Your name is " << name << " and your age (in months) is "<< age_in_months << "\n";
}
