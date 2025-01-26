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


#include <iostream>
using namespace std;

int a = 100; // Global Scope

int main()
{
	int a = 6, b = 10;
	cout << "AND operator = " << (a & b) << endl;
	cout << "------------------------" << endl;
	cout << "OR operator = " << (a | b) << endl;
	cout << "------------------------" << endl;
	cout << "XOR operator = " << (a ^ b) << endl;

	cout << "------------------------" << endl;
	cout << "Left shift =  " << (a << 1) << endl;
	cout << "Right shift =  " << (a >> 1) << endl;

	cout << "----------Precendence--Associative--------------" << endl;
	cout << "5+2-3= " << 5 + 2 - 3 << endl;	  // 4
	cout << "5*2/3= " << 5 * 2 / 3 << endl;	  // 3
	cout << "5+2/3= " << (5 + 2) / 3 << endl; // 3
	cout << "5+2/3= " << 5 + 2 / 3 << endl;	  // 5

	cout << "----------Scope--------------" << endl;
	cout << "Global scope variable = " << a << endl;		 // 6 from main function
	cout << "outer Global scope variable = " << ::a << endl; // 100 from global scope

	int y = 10; // Global Scope inside main function
	{
		int x = 20;										// Block Scope
		cout << "block scope variable = " << x << endl; // 20
		cout << "Global scope variabl = " << y << endl;	// 10
	}

	cout << "---------Modifyers---------" << endl;
	cout << "Size of int = " << sizeof(int) << endl; // 4 bytes == 32 bits
	cout << "Size of short int = " << sizeof(short int) << endl; // 2 bytes == 16 bits
	cout << "Size of long int = " << sizeof(long int) << endl; // 8 bytes == 64 bits
	cout << "Size of long long int = " << sizeof(long long int) << endl; // 8 bytes	== 64 bits
	cout << "Size of float = " << sizeof(float) << endl; // 4 bytes == 32 bits
	cout << "Size of double = " << sizeof(double) << endl; // 8 bytes == 64 bits
	cout << "Size of long double = " << sizeof(long double) << endl; // 16 bytes == 128 bits	

	cout << "signed int = " << sizeof(signed int) << endl; // from -2^31 to 2^31-1
	cout << "unsigned int = " << sizeof(unsigned int) << endl; // from 0 to 2^32-1 always positive
	return 0;
}