#include <iostream>
#include <vector>
using namespace std;

class Chai
{
private:
	int servings;
	string teaName;
	vector<string> ingredients;

public:
	// default constructor
	Chai()
	{
		servings = 1;
		teaName = "UnKnown";
		ingredients = {"TeaLeaves", "water", "Sugar", "Milk"};
	};

	// parameterized constructor
	Chai(int serve, string Name, vector<string> ingre)
	{
		servings = serve;
		teaName = Name;
		ingredients = ingre;
	};

	// getter : to access the private data members 
	string getTeaName()
	{
		return teaName;
	};
	int getServings()
	{
		return servings;
	};

	vector<string> getIngredients()
	{
		return ingredients;
	};

	// setter : to modify the private data members
	void setTeaName(string Name)
	{
		teaName = Name;
	};
	void setServings(int serve)
	{
		servings = serve;
	};
	void setIngredients(vector<string> ingre)
	{
		ingredients = ingre;
	};

	void displayChaiDetails()
	{
		cout << "Tea Name: " << teaName << endl;
		cout << "Servings: " << servings << endl;
		cout << "Ingredients: ";
		for (string ingredient : ingredients)
		{
			cout << ingredient << ", ";
		}
		cout << endl;
	};
};

/**
 * The main function demonstrates the usage of the Chai class.
 * It creates an object of the Chai class with default values,
 * displays the tea name, modifies the tea name using the setter,
 * and then prints the updated tea name. Finally, it displays all
 * the details of the Chai object.
 */

int main()
{
	Chai chai1; // obejct of Chai class
	// Displaying default tea details
	cout << "Before updating tea name:" << endl;
	chai1.displayChaiDetails();

	// Modifying the tea name
	chai1.setTeaName("Masala Chai");

	// Displaying updated tea details
	cout << "\nAfter updating tea name:" << endl;
	chai1.displayChaiDetails();

	return 0;
}
