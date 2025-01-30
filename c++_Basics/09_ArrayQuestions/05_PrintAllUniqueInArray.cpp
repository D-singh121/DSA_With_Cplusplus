#include <iostream>

using namespace std;

// print arr
void printArr(int arr[], int sz)
{
	cout << "Array: ";
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	};
	cout << endl;
};

int main()
{

	int arr[] = {2, 3, 4, 5, 2, 3, 4, 5, 6, 2, 3, 7};
	int sz = 12;
	printArr(arr, sz);

	return 0;
};