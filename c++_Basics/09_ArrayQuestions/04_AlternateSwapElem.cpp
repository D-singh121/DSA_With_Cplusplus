#include <iostream>

using namespace std;

// print arr
void printArr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	};
	cout << endl;
};

// swap alternate value in array;
// Hum loop ko 0 se size tak run karenge aur fir usme check karenge ki kya "i+1" smaller hai "size" se agar  nahi hai to loop ko exit kar denge but agar hai to "0" index position ke element ko 0+1 yani 1 index position se swap kar denge aur fir index(i=0) ko 2 index aage badha denge because hum nahi chahate ki humara i=0 ke baad wala element i=1 arraye ke i=2 se swap ho jaye;
void alternateSwaps(int arr[], int sz)
{
	for (int i = 0; i < sz; i += 2)
	{
		if (i + 1 < sz)
		{
			// behind swap func: ek variable lenge aur usme array ki swaping index me se koi bhi value store kar denge eg: temp=arr[1], ab arr[1] me hum arr[0] ko store kar denge eg: arr[1]=arr[0] ab humara arr[0] empty hai to usme temp ki value jo ki previous arr[1] ki value store hai usse arr[0] me store karwa denge;
			swap(arr[i], arr[i + 1]);
		}
	};
};

int main()
{

	int evenArr[8] = {2, 4, 6, 5, 7, 8, 9, 10};
	int oddArr[7] = {5, 4, 8, 2, 7, 1, 9};

	int sz = 8; // for even 8 and 7 for odd
	int oddSize = 7;

	alternateSwaps(evenArr, sz);
	alternateSwaps(oddArr, oddSize);

	printArr(evenArr, sz);
	printArr(oddArr, oddSize);

	return 0;
};