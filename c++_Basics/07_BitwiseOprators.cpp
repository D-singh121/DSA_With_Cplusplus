// hello , hum yaha bitwise operators ke bare me padhenge
// bitwise operators ka use karke hum binary numbers ke sath operations perform kar sakte hai
// bitwise operators ke 6 types hote hai
// 1. AND operator
// 2. OR operator
// 3. XOR operator ===> Exclusive OR
// 4. NOT operator
// 5. Left Shift operator
// 6. Right Shift operator

// 1. AND operator: &
// AND operator ka use karke hum bitwise AND operation perform kar sakte hai
// AND operator ka use karne ke liye hume do binary numbers ki jarurat hoti hai
// AND operator ka use karne par output 1 tab hota hai jab dono binary numbers me 1 hota hai
// AND operator ka use karne par output 0 tab hota hai jab dono binary numbers me se koi bhi 0 hota hai
// 0 & 0 = 0
// 0 & 1 = 0
// 1 & 0 = 0
// 1 & 1 = 1
// example:
// 5= 101
// 3= 011
// 5 & 3= 001= 1
// 5 | 3= 111= 7
// 5 ^ 3= 110= 6

// left and right shift by 1
// 5= 101
// 5<<1= 1010 in binary = 10in decimal  ----->   ans = a * 2^n  = 5*2^1 = 10 in decimal
// 5>>1= 10 in binary = 2 in decimal  ----->   ans = a / 2^n  = 5/2^1 = 2 in decimal

// Operators precedence:
// 1. ()   for  same precedence use associativity rule (left to right or right to left)
// 2. !, ++, --, - (unary operators)
// 3. *, /, %
// 4. +, -
// 5. <<, >>
// 6. <, <=, >, >=
// 7. ==, !=
// 8. &
// 9. ^
// 10. |
// 11. &&
// 12. ||
// 13. =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
// 14. ,
// in same precedence unary and assgiment operators are right to left associative and rest are left to right associative.

// Scope : Scope is the region of the program where a defined variable can have its existence and beyond that variable cannot be accessed.
// 1. Local Scope
// 2. Global Scope
// 3. Class Scope
// 4. Namespace Scope
// 5. Function Scope
// 6. Block Scope

// Data type modifiers: Data type modifiers are used with data types to modify the amount of memory allocated to a variable.
// 1. signed
// 2. unsigned
// 3. long 		// long int
// 4. short
// 5. long long
// 6. long double
// etc....

// Qestion :
// 1. How to find if a number is power of 2 without using loops?
// solution:  lets  n = 8; and 8 = 1000 in binary
// n << x == n * 2^x
// 8 << 1 == 8 * 2^1
// in binary of 8 is: 1000 << 1 == 8 * 2
// 10000 == 16
// so  10000 in binary is eqaul to 16 in decimal so 8 is power of 2
// hence n << x == n * 2^x

/*
// Function to check if a number is a power of 2;
// solution:
bool isPowerOfTwo(int n)
{
	if (n <= 0)
		return false; // Negative numbers and zero are not powers of 2
	return (n & (n - 1)) == 0;
};
*/

/*
// write a program to reverse a number  like 1234 into 4321;
// Solution:
int reverseNumber(int num)
{
	int reverse = 0, remender = 0;
	while (num > 0)
	{
		remender = num % 10; // on first iteration remender = 1234%10 = 4 and so on 3,2,1 for next iterations
		reverse = reverse * 10 + remender; // on first iteration reverse = 0*10+4 = 4 and so on 43,432,4321 for next iterations
		num /= 10; // num = num/10; on first iteration num = 1234/10 = 123 and so on 12,1,0 for next iterations
	};
	return reverse; // result number here 4321
};
*/

// ----------------------------------------------------------// Starting of the main function //----------------------------------------------------------
// int a = 100; // Global Scope
#include <iostream>
using namespace std;

int main()
{
	// int a = 6, b = 10;
	// cout << "AND operator = " << (a & b) << endl;
	// cout << "------------------------" << endl;
	// cout << "OR operator = " << (a | b) << endl;
	// cout << "------------------------" << endl;
	// cout << "XOR operator = " << (a ^ b) << endl;

	// cout << "------------------------" << endl;
	// cout << "Left shift =  " << (a << 1) << endl;
	// cout << "Right shift =  " << (a >> 1) << endl;

	// cout << "----------Precendence--Associative--------------" << endl;
	// cout << "5+2-3= " << 5 + 2 - 3 << endl;	  // 4
	// cout << "5*2/3= " << 5 * 2 / 3 << endl;	  // 3
	// cout << "5+2/3= " << (5 + 2) / 3 << endl; // 3
	// cout << "5+2/3= " << 5 + 2 / 3 << endl;	  // 5

	// cout << "----------Scope--------------" << endl;
	// cout << "Global scope variable = " << a << endl;		 // 6 from main function
	// cout << "outer Global scope variable = " << ::a << endl; // 100 from global scope

	// int y = 10; // Global Scope inside main function
	// {
	// 	int x = 20;										// Block Scope
	// 	cout << "block scope variable = " << x << endl; // 20
	// 	cout << "Global scope variabl = " << y << endl; // 10
	// }

	// cout << "---------Modifyers---------" << endl;
	// cout << "Size of int = " << sizeof(int) << endl;					 // 4 bytes == 32 bits
	// cout << "Size of short int = " << sizeof(short int) << endl;		 // 2 bytes == 16 bits
	// cout << "Size of long int = " << sizeof(long int) << endl;			 // 8 bytes == 64 bits
	// cout << "Size of long long int = " << sizeof(long long int) << endl; // 8 bytes	== 64 bits
	// cout << "Size of float = " << sizeof(float) << endl;				 // 4 bytes == 32 bits
	// cout << "Size of double = " << sizeof(double) << endl;				 // 8 bytes == 64 bits
	// cout << "Size of long double = " << sizeof(long double) << endl;	 // 16 bytes == 128 bits

	// cout << "signed int = " << sizeof(signed int) << endl;	   // from -2^31 to 2^31-1
	// cout << "unsigned int = " << sizeof(unsigned int) << endl; // from 0 to 2^32-1 always positive

	/*
	// Check if a number is a power of 2
	int num;
	cout << "Enter a number: ";
	cin >> num;

	if (isPowerOfTwo(num))
	{
		cout << num << " is a power of 2." << endl;  // for true
	}
	else
	{
		cout << num << " is not a power of 2." << endl; // for false
	}
	*/

	/*
	// Reverse a number
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Reverse of " << num << " is " << reverseNumber(num) << endl; // function call
	*/

	return 0;
};