// Array Datastructure learnings:
#include <iostream>
#include <limits.h> // Include this header for INT_MAX and INT_MIN
using namespace std;

int main()
{
	cout << "Today we are going to learn the array Data Structure !" << endl;
	/*
		// Array syntax:
		double myArray[5];						 // only size define but not element
		int marks[6] = {44, 55, 66, 77, 88, 99}; // size and element both define
		cout << marks[0] << endl;

		int age[] = {12, 45, 13, 74, 15, 55, 44, 36, 28, 22};
		cout << "Size of total 'age' array in bytes : " << sizeof(age) << " bytes" << endl; // ans:- 40;  yaha pe size bytes me aayega jo ki array ki total elments ko bytes me calculate karta hai; 10element == 4bytes*10 = 40bytes;

		// lets calculate the size of an array  age from above ;
		int size = sizeof(age) / sizeof(age[0]);							// 40bytes/4bytes = 10
		cout << "Total size of 'age' array in length is: " << size << endl; // 10

		// printing all elements using loops;
		for (int i = 0; i < size; i++)
		{
			cout << "All elements are : " << age[i] << endl;
		};
		cout << "--------------------////-------------------------------------------///\n";
	*/

	/*
		// taking values from user
		int carSize = 5;
		int car[carSize];
		cout << "Enter the car no. ";
		for (int i = 0; i < carSize; i++)
		{
			cin >> car[i];
		};
		for (int i = 0; i < carSize; i++)
		{
			cout << car[i] << endl;
		}
	*/

	/*
		// Question 1: find the largest and smallest integer on an array
		// Solution:
		int arr[] = {2, 40, 56, 100, -50, 10};
		int size = 6;
		int smallest = INT_MAX; // largest possible positive integer  is "+infinity" aur c++ me ise INT_MAX likhte hai ;
		int largest = INT_MIN;		// largest possible negative integer  is "-infinity" aur c++ me ise INT_MIN likhte hai ;

		for (int i = 0; i < size; i++)
		{
			// if (arr[i] < smallest)
			// {
			// 	smallest = arr[i];
			// };
			// ---- OR--------
			// ye if condition ko na use karke hum builtin "min()" and "max()" function ka use bhi kar sakte hai;
			smallest = min(arr[i], smallest);
			largest = max(arr[i], largest);
		};
		cout << "Smallest element is: " << indexof(smallest) << endl;
		cout << "Largest element is: " << largest << endl;
	*/

	// Pass by refrence : isme jab hum kisi array ko kisi another function se modify karte hai to original array bhi change ho jata hai because us function me array ki new copy na bankar original array ka adderss hi pass hota hai. aur ye pass by refrence hota hai . basically arrays ek pointers ki tarah kaam karte hai jo poore array ki starting adderess and size ko point karte hai memory me;

	return 0;
};