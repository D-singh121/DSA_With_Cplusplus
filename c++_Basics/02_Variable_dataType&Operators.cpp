#include <iostream>
using namespace std;

int main()
{
	// Variables and Data Types
	char myName = 'D';	  // 1 bytes memory is allocated to store the character 8bits
	int age = 20;		  // 4 bytes memory is allocated to store the integer 32bits
	float height = 5.8f;  // 4 bytes memory is allocated to store the float 32bits
	double weight = 70.5; // 8 bytes memory is allocated to store the double 64bits
	bool isSafe = true;	  // 1 bytes memory is allocated to store the boolean 8bits

	cout << myName << endl;
	cout << age << endl;
	cout << height << endl;
	cout << weight << endl;
	cout << isSafe << endl; // 1 is printed as true and 0 is printed as false;
	cout << "------------------------" << endl;

	//--------------------------------------------------------------s------------------------------------------------------------------------------------------------------------------//
	// Type conversion
	// jab hum ek data type ko dusre data type me convert karte hai to use type conversion kehte hai aur ye automatic bhi ho sakta hai aur manual bhi.
	// Automatic type conversion: jab hum ek chota data type ko bade data type me convert karte hai to use automatic type conversion kehte hai.
	// example of automatic type conversion from 1bytes to 4bytes;
	char name = 'D';
	cout << name << endl;  // before type conversion it is char D;
	int value = name;	   // automatic type conversion from char to int;
	cout << value << endl; // after type conversion it is int 68 as ASCII value of D is 68;
	cout << "------------------------" << endl;

	// Manual type conversion or type Casting : jab hum ek bade data type ko chota data type me convert karte hai to use manual type conversion ya fir type casting kehte hai.
	// example of manual type conversion from 8bytes to 4bytes;
	double price = 100.50;
	int newPrice = price; // manual type conversion from double to int;
	// int newPrice = (int)price; // Isko hum type aise bhi likh sakate hai;
	cout << newPrice << endl; // after type conversion it is int 100 as decimal part is not included.
	cout << "------------------------" << endl;

	//--------------------------------------------------------------s------------------------------------------------------------------------------------------------------------------//
	// Operators
	// binary operators: jo do operands ke beech me perform hote hai.
	// 1. Arithmetic Operators: +, -, *, /, %;
	// Arithmetic operators are used to perform mathematical operations.
	int a = 22, b = 10;
	cout << "Addition= " << a + b << endl;
	cout << "Subtraction= " << a - b << endl;
	cout << "Multiplication= " << a * b << endl;
	cout << "Division= " << a / b << endl;
	cout << "Modulo= " << a % b << endl; // Modulo operator gives the remainder of the division of two numbers.
	cout << "------------------------" << endl;

	// 2.Relational Operators: >, <, >=, <=, ==, !=;
	// Relational operators are used to compare two values.
	cout << "Greater than= " << (5 > 4) << endl;			  // true=1 because 5 is greater than 4;
	cout << "Less than= " << (5 < 4) << endl;				  // false=0 because 5 is not less than 4;
	cout << "Greater than or equal to= " << (5 >= 4) << endl; // true=1 because 5 is greater than 4;
	cout << "Less than or equal to= " << (5 <= 4) << endl;	  // false=0 because 5 is not less than 4;
	cout << "Equal to= " << (5 == 4) << endl;				  // false=0 because 5 is not equal to 4;
	cout << "Not equal to= " << (5 != 4) << endl;			  // true=1 because 5 is not equal to 4;
	cout << "------------------------" << endl;

	// 3. Logical Operators: &&, ||, !;
	// Logical AND: &&; Logical OR: ||; Logical NOT: !;
	cout << "Logical AND= " << (5 > 4 && 5 < 4) << endl; // false=0 because 5 is not less than 4;
	cout << "Logical OR= " << (5 > 4 || 5 < 4) << endl;	 // true=1 because 5 is greater than 4;
	cout << "Logical NOT= " << !(5 > 4) << endl;		 // false=0 because 5 is not less than 4; ye true ko false aur false ko true me convert karta hai.
	cout << "------------------------" << endl;

	//--------------------------------------------------------------s------------------------------------------------------------------------------------------------------------------//
	// Questions:
	// Sum, multiplication, subtraction and divdation of two numbers by taking input from the user.
	int num1, num2;
	cout << "Enter first number: " && cin >> num1;
	cout << "Enter second number: " && cin >> num2;
	cout << "Sum of two numbers is: " << num1 + num2 << endl;
	cout << "Multiplication of two numbers is: " << num1 * num2 << endl;
	cout << "Subtraction of two numbers is: " << num1 - num2 << endl;
	cout << "Division of two numbers is: " << num1 / float(num2) << endl;
	cout << "------------------------" << endl;

	// UNARY OPERATORS: jo ek operand ke saath perform hote hai. : ++, --;
	// Increment and Decrement Operators: ++, --;
	int x = 10;
	cout << "Increment= " << ++x << endl; // 11; pehle increment fir print;
	cout << "Decrement= " << --x << endl; // 10; pehle decrement fir print;
	cout << "Increment= " << x++ << endl; // 10; pehle print fir increment;
	cout << "Decrement= " << x-- << endl; // 11; pehle print fir decrement;
	cout << "------------------------" << endl;

	// return 0;
};