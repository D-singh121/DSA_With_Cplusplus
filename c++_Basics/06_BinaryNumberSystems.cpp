// binary number system
// Decimal number system base is 10 --> eg : 0 to 9
// Binary number system base is 2 -->  eg : 0 and 1 only

// Conversion of decimal number to binary number:
// decimal number ko hum tab tak divide karenge jab taj tak quotient 0 nahi ho jata aur uske baad hum uske remainder ko reverse order me likhenge jo ki binary number hoga;
// eg: 13
// 13/2 = 6 remainder 1
// 6/2 = 3 remainder 0
// 3/2 = 1 remainder 1
// 1/2 = 0 remainder 1
// 1101 is the binary number of 13

// ----------------//---------------------------------------------------------------------//-----------------
// Conversion of binary number to decimal number:
// binary number ko hum right to left read karenge aur uske base ke power se multiply karenge aur uska sum nikalenge;
// eg: 1101
// 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 8 + 4 + 0 + 1 = 13
// 13 is the decimal number of 1101

// Addtion of binary numbers:
// 0 + 0 = 0 ;	0 + 1 = 1 ;	1 + 0 = 1 ;	1 + 1 = 10; from right to left 1 and carry 1 to left side;

// Two's complement of binary number:
// 1's complement of binary number + 1 = 2's complement of binary number;
// 1's complement of binary number: 0 ko 1 me and 1 ko 0 me change karna hota hai;
// eg: 1101
// 1's complement: 0010
// 2's complement: 0010 + 1 = 0011	// 2's complement of 1101 is 0011
// 2's complement is used to represent negative numbers in binary number system;
// eg: -13
// 13 ka binary number 1101 hai
// 2's complement of 1101 is 0011
// 0011 + 1 = 0100
// 0100 is the 2's complement of -13


#include <iostream>
using namespace std;

// function to convert decimal number to binary number;
int DecimalToBinary(int decimalNum)
{
	int ans = 0, power = 1;
	while (decimalNum > 0)
	{
		int remender = decimalNum % 2; // yaha se remainder nikalenge
		decimalNum = decimalNum / 2;   // fir decimal number ko divide karenge 2 se tab tak jab tak 0 na ho jaye;
		ans += remender * power;	   // ans me remainder ko multiply karenge power se aur add karenge
		power = power * 10;			   // power ko multiply karenge 10 se taki hume reverse order me binary number mil jaye
	}
	return ans;
};

// function to convert binary number to decimal number;
int BinaryToDecimal(int binaryNum)
{
	int ans = 0, power = 1;
	while (binaryNum > 0)
	{
		int remender = binaryNum % 10; // yaha se remainder nikalenge
		binaryNum = binaryNum / 10;	   // fir binary number ko divide karenge 10 se tab tak jab tak 0 na ho jaye;
		ans += remender * power;	   // ans me remainder ko multiply karenge power se aur add karenge
		power *= 2;					   // power ko multiply karenge 2 se taki hume decimal number mil jaye
	}

	return ans;
};

int main()
{
	// int num;
	// cout << "Enter the decimal number: ";
	// cin >> num;
	// cout << DecimalToBinary(num) << " Is the binary number of decimal num " << num << endl;

	int binNum;
	cout << "Enter the Binary number: ";
	cin >> binNum;
	cout << BinaryToDecimal(binNum) << " Is the decimal number of binary num " << binNum << endl;

	return 0;
}
