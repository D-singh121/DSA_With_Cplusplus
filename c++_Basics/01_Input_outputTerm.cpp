// Boilerplate code for input output
/*
#include <iostream>
using namespace std;
int main()
{
	return 0;
};
*/

#include <iostream>
using namespace std;
int main()
{
	// cout is used to print the output on the console.
	cout << "hello world" << endl;
	cout << "my name is Devesh" << '\n';
	cout << "I am from india \n";

	// cin is used to take input from the user.
	string name;
	cout << "Size of name variable: " << sizeof(name) << " bytes" << endl;  // Size of name variable: 32 bytes
	cout << "Enter your name: ";
	cin >> name;
	cout << "Your name is: " << name << endl;
	cout << "Size of name variable: " << sizeof(name) << " bytes" << endl;  // Size of name variable: 32 bytes

	return 0;
};
