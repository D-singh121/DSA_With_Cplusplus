// Pattern Printing;

#include <iostream>
using namespace std;

int main()
{
	/*
	// 1. Square Pattern with *
	int n = 4;
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << "=====================" << endl;
	*/

	/*
		// 2. Square Pattern with ABCD
		int n = 4;
		for (int i = 0; i < n; i++)
		{
			char ch = 'A'; // ASCII value of A is 65
			for (int j = 0; j < n; j++)
			{
				cout << ch << " ";
				ch += 1; // Incrementing the character by 1 to get next character on ASCII table ;
			}
			cout << endl;
		}
		cout << "=====================" << endl;
	*/

	/*
	// 3. Square Pattern with 123456789  and 111 111 111 and 123 123 123 order;
	int n = 3;
	int count = 1; // isko for loop ke andar rakhne se uske bahar aane ke baad ye reset ho jayega; isliye yahe pe output 123456789 ayega;
	for (int i = 0; i < n; i++)
	{
		// count = 1; // yaha pe rakhne se output 123 123 123 ayega;
		for (int j = 0; j < n; j++)
		{
			// count = 1; // agar count ko yaha pe rakhenge toh output 111 111 111 ayega
			cout << count << " ";
			count += 1;
		}
		cout << endl;
	}
	*/

	/*
	// 4. Triangle Pattern with * so output will be * ** *** ****;
	int n = 4;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	*/

	/*
	// 5. Triangle Pattern with numbers like 1 22 333 4444;
	int n = 6;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << i+1 << " ";
		}
		cout << endl;
	}
	*/

	/*
	// 6. Triangle Pattern with ABCD so output will be A AB ABC ABCD;
	int n = 5;
	char ch = 'A';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << ch;
			// ch++; // Increment ko yaha pe rakhne par output A BC DEF GHIJ AND so on for n values ayega;
		}
		ch++; // Increment ko yaha pe rakhne par output A BB CCC DDDD EEEE and so on ayega;
		cout << endl;
	}
	*/

	/*
	// 7. Triangle Pattern with numbers like 1 12 123 1234;
	int n = 6;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << j + 1 << " ";
		}
		cout << endl;
	}
	*/

	/*
		// 8. Inverted Left side Triangle Pattern with numbers like 12345 1234 123 12 1;
		int n = 5;
		for (int i = n; i>0; i--)
		{
			for (int j = 0; j <= i - 1; j++)
			{
				cout << j + 1 << " ";
			}
			cout << endl;
		}
	*/

	/*
	// 9. Reverse Triangle Pattern with numbers like 1 21 321 4321;
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j > 0; j--)
		{
			cout << j << " ";
		}
		cout << endl;
	}
	*/

	/*
	// 10. Floyd's Triangle Pattern with numbers like 1 23 456 78910;
	int n = 5;
	int num = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
	*/

	/*
		// 11. Inverted Triengle pattern
		int n = 5;
		for (int i = 0; i < n; i++)
		{
			// second loop jitne baar chalega utne space print karega;
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			// third loop pe hum number print karenge i=0 ke liye 1111, i=1 ke liye *222 and so on "*"iska matlab space hai yaha
			for (int j = 0; j < n - i; j++)
			{
				cout << i + 1;
			}
			cout << endl;
		}
	*/

	/*
		// 12. Inverted Triengle pattern with pattern like AAAA BBB CC D with space befor letter;
		int n = 4;
		char ch = 'A';
		for (int i = 0; i < n; i++)
		{
			// second loop jitne baar chalega utne space print karega;
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			// third loop pe hum number print karenge i=0 ke liye 1111, i=1 ke liye *222 and so on "*"iska matlab space hai yaha
			for (int j = 0; j < n - i; j++)
			{
				cout << ch;
			}
			ch++;
			cout << endl;
		}
	*/

	/*
		// 13. Inverted Triengle pattern with pattern like ABCD EFG HI J with space befor letter;
		int n = 4;
		char ch = 'A';
		for (int i = 0; i < n; i++)
		{
			// second loop jitne baar chalega utne space print karega;
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}
			// third loop pe hum number print karenge i=0 ke liye 1111, i=1 ke liye *222 and so on "*"iska matlab space hai yaha
			for (int j = 0; j < n - i; j++)
			{
				cout << ch;
				ch++;
			}
			cout << endl;
		}
	*/

	/*
		// 14. Pyramid pattern
		int n = 8;
		for (int i = 0; i < n; i++)
		{
			// first half ke liye pahle space print karwa lenge
			for (int j = 0; j < n - i - 1; j++)
			{
				cout << " ";
			}
			// for number printing on first half tringle;
			for (int j = 1; j <= i + 1; j++)
			{
				cout << j;
			}
			// for 3rd right half triengle
			for (int j = i; j > 0; j--)
			{
				cout << j;
			}
			cout << endl;
		}
	*/


	// Hollow Diomond Pattern ;
	
	return 0;
};
