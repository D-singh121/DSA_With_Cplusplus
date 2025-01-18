// Conditional Loops & Statement in C++;
// If, Else, Else If, Switch, While, Do While, For, Break, Continue, Goto, Return
#include <iostream>
using namespace std;

int main() {
	// int n;
	// int age;
	// int checkNumber;

	// cout << "Today we are going to learn Conditional Loops & Statement in C++" << endl;
	// cout << "Enter a number: ";
	// cin >> n;
	// if (n >= 0)
	// {
	// 	cout << "number is positive" << endl;
	// }
	// else
	// {
	// 	cout << "number is negative" << endl;
	// };
	// cout << "-----------------------------------\n";

	// cout << "Enter your Age: ";
	// cin >> age;
	// if (age >= 18)
	// {
	// 	cout << "You are eligible to vote\n";
	// }
	// else
	// {
	// 	cout << "Sorry! You are not eligible to vote\n";
	// }
	// cout << "-----------------------------------\n";

	// cout << "Enter a number to check: ";
	// cin >> checkNumber;
	// if (checkNumber % 2 == 0)
	// {
	// 	cout << "The typed Number is Even\n";
	// }
	// else
	// {
	// 	cout << "The Typed Number is Odd\n";
	// }
	// cout << "-----------------------------------\n";

	// // Else If Statement;
	// int marks;
	// cout << "Enter your marks: ";
	// cin >> marks;

	// if (marks >= 100 || marks <= 0)
	// {
	// 	cout << "Invalid Marks! Please type valid marks... \n";
	// }
	// else if (marks >= 90)
	// {
	// 	cout << "Grade A\n";
	// }
	// else if (marks >= 60)
	// {
	// 	cout << "Grade B\n";
	// }
	// else if (marks >= 50)
	// {
	// 	cout << "Grade C\n";
	// }
	// else if (marks >= 40)
	// {
	// 	cout << "Grade D\n";
	// }
	// else
	// {
	// 	cout << "Grade F or You are fail! \n";
	// }
	// cout << "-----------------------------------\n";

	// // check the latter case
	// char ch;
	// cout << "Enter a letter to check the latter case: \n";
	// cin >> ch;
	// if (ch >= 'a' && ch <= 'z')
	// {
	// 	cout << "Lower Case\n";
	// }
	// else
	// {
	// 	cout << "Upper Case\n";
	// }
	// cout << "-----------------------------------\n";

	// // with Capital Letter ASCII Value comparison;
	// if (ch >= 65 && ch <= 90)
	// {
	// 	cout << "Upper Case by ASCII Value \n";
	// }
	// else
	// {
	// 	cout << "Lower Case by ASCII value\n";
	// };
	// cout<<"-----------------------------------\n";

	// // Ternary Statement;
	// // condition ? true : false;
	// int a = 2;
	// a >= 10 ? cout << "Greater than 10\n" : cout << "Less than 10\n";

	// // ----------------------Switch Statement----------------------
	// // for , while, do while
	// // for loop:
	// // Question: Print 1 to 10 numbers using for loop;
	// for (int i = 1; i <= 10; i++)
	// {
	// 	cout << i << "\n";
	// };

	// // Question: Print the sum of n numbers using for loop;
	// int nNum;
	// cout << "Enter a number to get the sum of n numbers: ";
	// cin >> nNum;
	// int sum = 0;
	// for (int i = 1; i <= nNum; i++)
	// {
	// 	// sum += i
	// 	sum = sum + i;
	// }
	// cout << "Sum of n numbers is: " << sum << "\n";
	// cout << "-----------------------------------\n";

	// while loop:
	// // Question: Print 1 to 10 numbers using while loop;
	// int n = 20;
	// int i = 1;
	// while (i <= n)
	// {
	// 	cout << i << "\n";
	// 	i++;
	// };

	// // Question: Print the sum of n numbers using while loop;
	// int nNum2;
	// int sum2 = 0;
	// int i = 1;
	// cout << "Enter a number to get the sum of n numbers: ";
	// cin >> nNum2;
	// while (i <= nNum2)
	// {
	// 	sum2 += i;
	// 	i++;
	// }
	// cout << "Sum of n numbers is: " << sum2 << "\n";

	// // Question: Print the sum of odd numbers present between the range of n numbers using while loop;
	// int nNum3;
	// int sum3 = 0;
	// int i = 1;
	// cout << "Enter a number to get the sum of odd numbers: ";
	// cin >> nNum3;
	// while (i <= nNum3)
	// {
	// 	if (i % 2 != 0)
	// 	{
	// 		sum3 += i;
	// 	}
	// 	i++;
	// }
	// cout << "Sum of odd numbers is: " << sum3 << "\n";

	// //----------------------Do While Loop----------------------
	// // Question: Print 1 to 10 numbers using do while loop;
	// int n = 20;
	// int i = 1;
	// do
	// {
	// 	cout << i << "\n";
	// 	i++;
	// } while (i <= n);

	// //----------------------Break Statement----------------------
	// // check the prime number;
	// int n;
	// int i;
	// bool isPrime = true;
	// cout << "Enter a number to check the prime number: ";
	// cin >> n;
	// // sirf condition ko " i*i<=n " likhne se pura code optimize ho jata hai because agar koi number n se chota hai to uska square bhi n se chota hi hoga;
	// for (i = 2; i <= n - 1; i++)
	// {
	// 	if (n % 2 == 0)
	// 	{
	// 		isPrime = false;
	// 		break;
	// 	}
	// }
	// isPrime ? cout << "It's a Prime Number\n" : cout << "It's not a Prime Number\n";
	// cout << "-----------------------------------\n";

	//  // ----------------------Nested loop Statement----------------------
	// int i, j;
	// int n = 10;
	// for (i = 1; i <= n; i++)
	// {
	// 	int m = 10;
	// 	for (j = 1; j < m; j++)
	// 	{
	// 		cout << "*";
	// 	}
	// 	cout << "\n";
	// }

	// return 0;
};