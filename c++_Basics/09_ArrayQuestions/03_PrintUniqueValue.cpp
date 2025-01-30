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

// find a single uniqe value in array; 
int findUnique(int arr[], int sz)
{
	int ans = 0;
	for (int i = 0; i < sz; i++)
	{
		ans = ans ^ arr[i]; //aise bhi likh sakte hai-->   ans^=arr[i]
	}
	return ans;
}

int main()
{

	int arr[] = {2,3,4,5,2,3,4,5,6};
	int sz = 9;
	printArr(arr, sz);

	int uniqueValue = findUnique(arr, sz);
	cout << "Unique value: " << uniqueValue << endl;

	return 0;
};