#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr1[5] = {1, 2, 2, 3, 5};
	int arr2[5] = {1, 2, 3, 4};
	int n = 5;

	vector<int> ans;
	/*
		// first raw approach for non-sorted arrays;
		for (int i = 0; i < n; i++)
		{
			int element = arr1[i]; // arr1 ki ek element ko arr2 ke dusre element se comapre ya map karenge agar mil gya to use ans me dal denge aur fir use -integer mark denge taki dobara usse map na kar sake aur loop ko break kar denge;
			for (int j = 0; j < n; j++)
			{
				if (element == arr2[j])
				{
					ans.push_back(element);
					arr2[j] = -1; // good to use INT_MIN
					break;
				}
			}
		}
	*/

	/*
		// second optimize approach if arrays are sorted;
		int i = 0, j = 0;

		while (i < n && j < n)
		{
			if (arr1[i] == arr2[j])
			{
				ans.push_back(arr1[i]);
				i++;
				j++;
			}
			else if (arr1[i] < arr2[j])
			{
				i++;
			}
			else
			{
				j++;
			}
		}
	*/

	// Print the result
	cout << "Intersection Elements are = ";
	for (int num : ans)
	{
		cout << num << " ";
	}
	cout << endl;

	return 0;
}