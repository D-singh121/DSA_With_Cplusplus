// Qestion: write a function to calculate the sum and peroduct of all element on array ;
#include <iostream>
using namespace std;

// sum of all elem
int elemSum(int arr[], int size)
{
	int totalSum = 0;
	for (int i = 0; i < size; i++)
	{
		totalSum += arr[i];
	}
	return totalSum;
};

// product of all elem
int elemProduct(int arr[], int size)
{
	int totalProduct = 1;
	for (int i = 0; i < size; i++)
	{
		totalProduct *= arr[i];
	}
	return totalProduct;
};

// /*
// sum and product of all element; pair ek object ki tarh kaam karta hai ye 2 values ko ek sath return karwa sakta hai;
pair<int, int> sumAndProduct(int arr[], int size)
{
	int totalSum = 0, elemProduct = 1; // agar hum 0 se multiply karenge to ans 0 hi aayega
	for (int i = 0; i < size; i++)
	{
		totalSum += arr[i];
		elemProduct *= arr[i];
	};
	return {totalSum, elemProduct};
};
// */

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int size = 5;

	cout << "Sum of all element in array is = " << elemSum(arr, size) << endl;
	cout << "Product of all element in array is = " << elemProduct(arr, size) << endl;
	cout << "//-------------------------------//--------------------------------------------//\n";

	// yaha pe hum pair type use kar rahe hai because humara function 2 result return kar raha hai ;
	pair<int, int> result = sumAndProduct(arr, size);
	cout << "Sum: " << result.first << ", Product: " << result.second << endl;

	return 0;
};