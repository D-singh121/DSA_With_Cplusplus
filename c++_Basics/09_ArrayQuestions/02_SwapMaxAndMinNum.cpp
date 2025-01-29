#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	int arr[] = {12, 2, 24, 4, 5, 500, 7, 8, -120, 10};
	int size = 10;

	int smallest = INT_MAX; // largest possible positive integer  is "+infinity" aur c++ me ise INT_MAX likhte hai ;
	int largest = INT_MIN;	// largest possible negative integer  is "-infinity" aur c++ me ise INT_MIN likhte hai ;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
		else if (arr[i] > largest)
		{
			largest = arr[i];
		};

		// //  hum builtin "min()" and "max()" function ka use bhi kar sakte hai;
		// smallest = min(arr[i], smallest);
		// largest = max(arr[i], largest);
	};
	cout << "Smallest element is: " << smallest << endl;
	cout << "Largest element is: " << largest << endl;
	cout << "//------------------------------------------//-------------------------------\n";

	// after swapping the largest and smallest element;
	swap(smallest, largest);
	cout << "After Swap Smallest element is: " << smallest << endl;
	cout << "After Swap Largest element is: " << largest << endl;

	return 0;
};