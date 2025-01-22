// Functions
#include <iostream>
using namespace std;

/*
void call()
{
	cout << "hello\n";
};

double Sum(double a, double b)
{
	return a + b;
};
*/

/*
// Sum of n numbers ;
int sumOfN(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
};
*/

/*
// calculate N factorial like 1*2*3*4*5 like this way;
int nFact(int n)
{
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i; // or like "fact = fact * i"
	};
	return fact;
};
*/

/*
// calculate sum of digit at number like 145 so 1+4+5=10;
int digitSum(int num)
{
	int digitSum = 0;
	while (num > 0) // hum number ko tab tak divide karenge jab tak vo 0 se bada hoga
	{
		int endDigit = num % 10; // eg: 145 ko 10 se divide karne par modulo 5 yani ki last  ki digit bachti hai;
		num = num / 10;
		digitSum += endDigit; // endDigit 5,4,1 digitSum jo intially 0 hai usme add hota jayega;
	}
	return digitSum;
}
*/

// main starting function;
int main()
{
	cout << "Learn the Funtions \n";
	// call();
	// cout << Sum(6.6, 6.9) << endl;
	// cout << sumOfN(5) << endl;
	// cout << sumOfN(50) << endl;
	// cout << "Factorial of N numbers is = " << nFact(3) << endl;
	// cout << digitSum(145) << endl;

	// return 0;
};

// Home work ;
// 1. check if a number is prime or not;s
// 2. print all prime number between 2 to N with the help of function;
// 3. print the nth Fibonacchi number ;