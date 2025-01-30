#include <iostream>
#include <vector>

using namespace std;

// Vectors are data structure to store the dynamic size of same types of data ;

// find elem exist
bool findNum(vector<int> vec, int num)
{
	for (int val : vec)
	{
		if (num == vec[val])
		{
			return true;
		}
	}
	return false;
};

// reversing vector
void reverseVect(vector<int>& vec)
{
	int start = 0, end = vec.size()-1;
	while (start < end)
	{
		swap(vec[start], vec[end]);
		start++;
		end--;
	}
};

int main()
{
	// vector<int>vec1;     -----> empty vector creation
	// vector<int> vec2 = {1, 2, 3, 4, 5}; // ---------> vector with element
	// vector<int>vec3(4,0); // --------------> vector wih size and initiale values;

	// vector<data_type> vector_name(size, initilizer); // ye syntax hai
	vector<int> vec2(4, 1); // ye kuch is tarah se banega "vector<int>vec2 = {1,1,1,1}"
	cout << vec2[0] << endl;
	cout << vec2[1] << endl;
	cout << vec2[2] << endl;
	cout << vec2[3] << endl;
	cout << vec2[4] << endl; // ye index exist hi nahi karta isliye 0 aa raha hai;
	cout << "//---------------------------------//---------------------\n";

	/*
	// vectors ke uper hum generaly forEach loop laga ke uske values ko access karte hai;
		// syntax :
		for (data_type value : vector_name)
		{
			cout << value << endl;
		};
	*/
	vector<char> vec3 = {'a', 'b', 'c', 'd', 'e'};
	// print by forEach() loop
	for (char val : vec3)
	{
		cout << val << ",";
	};
	cout << endl;

	cout << "vector Size is = " << vec3.size() << endl;

	vec3.push_back('f'); // adds elements at last
	vec3.push_back('g');
	vec3.push_back('h');
	vec3.push_back('i');
	cout << "After addition vector Size is = " << vec3.size() << endl;
	cout << "After addition vector Capacity is = " << vec3.capacity() << endl; // capacity and size are different;
	// print by forEach() loop
	for (char val : vec3)
	{
		cout << val << ",";
	};
	cout << endl;

	vec3.pop_back(); // it will automaticaly removes the last index value;
	cout << "After deletion or poping out vector Size is = " << vec3.size() << endl;
	for (char val : vec3)
	{
		cout << val << ",";
	};
	cout << endl;

	cout << "At first position index = " << vec3.front() << endl;
	cout << "At last position index = " << vec3.back() << endl;
	cout << "At any Specific index position = " << vec3.at(2) << endl;
	cout << "//--------------------------------------//----------\n";

	// ----------------Size and capacity--------Internal working -----------------------------//
	// size --> number of element  present in vector
	// capacity ---> number of spaces to store tha element
	vector<int> sizeAndCap; // initial 0;
	sizeAndCap.push_back(1);
	cout << "after adding element size is = " << sizeAndCap.size() << endl;				// 1
	cout << "after adding elements the capacty is = " << sizeAndCap.capacity() << endl; // 1
	sizeAndCap.push_back(2);
	sizeAndCap.push_back(3);
	cout << "after adding more elements the size is = " << sizeAndCap.size() << endl;		 // 3
	cout << "after adding more elements the capacty is = " << sizeAndCap.capacity() << endl; // 4
	// now agar hum 2 elements aur add kar de to capacity double ho jayegi because current me ek element ki space empty hai but next me vo double karke sare elements ko copy kar dega ;
	sizeAndCap.push_back(4);
	sizeAndCap.push_back(5);
	cout << "after adding 2 more elements the size is = " << sizeAndCap.size() << endl;		   // from 3 to 5
	cout << "after adding 2 more elements the capacty is = " << sizeAndCap.capacity() << endl; // from 4 to 8
	cout << "//--------------------------------------//----------\n";

	// questions:
	// 1. linear search code for vector: find num existance
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
	for (int val : vec)
	{
		cout << val << ", ";
	};
	cout << endl;
	int num = 7;

	findNum(vec, num) ? cout << num << " is present in the vector." << endl : cout << num << " is not present in the vector." << endl;

	// 2. Reversing the vector elements
	reverseVect(vec);
	cout<< "After Reversing vector"<< endl;
	for (int val : vec)
	{
		cout << val << ", ";
	};
	cout << endl;

	return 0;
};