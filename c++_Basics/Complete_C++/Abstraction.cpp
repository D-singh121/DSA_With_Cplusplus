#include <iostream>
using namespace std;

// Abstract class
class Tea
{
public:
	virtual void prePareIngredients() = 0; // pure virtual function
	virtual void brewTea() = 0;			   // pure virtual function
	virtual void serveTea() = 0;		   // pure virtual function

	// abstract class can have concrete methods
	void makeTea()
	{
		prePareIngredients(); // calling pure virtual function
		brewTea();			  // calling pure virtual function
		serveTea();			  // calling pure virtual function
	}
};

// Derived class from Tea
class GingerTea : public Tea
{
public:
	void prePareIngredients()
	{
		cout << "Preparing Ginger Tea Ingredients" << endl;
	}

	void brewTea()
	{
		cout << "Brewing Ginger Tea" << endl;
	}

	void serveTea()
	{
		cout << "Serving Ginger Tea" << endl;
	}
};

class MasalaTea : public Tea
{
public:
	void prePareIngredients()
	{
		cout << "Preparing Masala Tea Ingredients" << endl;
	}

	void brewTea()
	{
		cout << "Brewing Masala Tea" << endl;
	}

	void serveTea()
	{
		cout << "Serving Masala Tea" << endl;
	}
};

int main()
{
	GingerTea gingerTea; // object of derived class
	MasalaTea masalaTea;

	gingerTea.makeTea(); // calling method of abstract class
	masalaTea.makeTea();

	return 0;
};