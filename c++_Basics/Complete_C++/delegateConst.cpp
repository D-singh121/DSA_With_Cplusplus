#include <iostream>
#include <vector>
using namespace std;

class Chai
{
public:
	int servings;
	string teaName;
	vector<string> ingredients;

	// Default constructor : agar hum koi parameter pass nahi karte hai toh yeh constructor call hoga;
	Chai() : Chai(1, "UnKnown", {"TeaLeaves", "water", "Sugar"})
	{
		cout << "Default constructor called" << endl;
	}

	// delegate constructor agar hum sirf 1 parameter pass karte hai toh yeh constructor call hoga;
	Chai(string Name) : Chai(1, Name, {"TeaLeaves", "water", "Sugar", "Milk"})
	{
		cout << "Delegate constructor called" << endl;
	};

	// parameterized constructor : agar hum 3 parameter pass karte hai toh yeh constructor call hoga;
	Chai(int serve, string Name, vector<string> ingre)
	{
		servings = serve;
		teaName = Name;
		ingredients = ingre;

		cout << "Parameterized Main constructor called" << endl;
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

int main()
{
	Chai fastChai("lemonTea"); // obejct of Chai class
	fastChai.displayChaiDetails();
	Chai masalaChai(2, "MasalaChai", {"TeaLeaves", "water", "Sugar", "Milk", "Masala"});
	masalaChai.displayChaiDetails();
	Chai defaultChai;
	defaultChai.displayChaiDetails();

	return 0;
}
