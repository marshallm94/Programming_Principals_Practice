#include "../std_lib_facilities.h"

int main() {
	string recipient = "?";
	cout << "Enter the name of the person you want to write to: ";
	cin >> recipient;

	string friend_name = "?";
	cout << "Enter the name of a mutual friend of you and "
		 << recipient << ": ";
	cin >> friend_name;

	char friend_sex = 0;
	cout << "Enter the sex of that mutual friend (m/f): ";
	cin >> friend_sex;

	int recipient_age = 0;
	cout << "How old is " << recipient << "?: ";
	cin >> recipient_age;

	cout << "Below is your letter\n==========\n";

	cout << "Dear " << recipient << ",\n"
		 << "\nHow are you? I hope all is well.\n";

	if (friend_sex == 'm') {
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	} else if (friend_sex == 'f') {
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}

	cout << "I hear you just had a birthday and you're " << recipient_age
		 << " years old.\n";

	if (recipient_age <= 0 || recipient_age >= 110) {
		simple_error("you're kidding!");
	}

	if (recipient_age < 12) {
		cout << "Next year you will be "
			 << recipient_age+1 << '\n';
	}
	if (recipient_age == 17) {
		cout << "Next year you will be able to vote.\n"; 
	}
	if (recipient_age > 70) {
		cout << "I hope you are enjoying retirement.\n"; 
	}

	cout << "Yours Sincerely,\nMarshall\n\n";

	return 0;
}
