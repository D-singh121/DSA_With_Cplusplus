#include <iostream>
#include <string>

using namespace std;

// Base/Main/Orignal/Parent  class
class Tea
{
protected:
	string teaName;
	int servings;

public:
	Tea(int serve, string name) : servings(serve), teaName(name)
	{
		cout << "Tea constructor called for " << teaName << endl;
	}
	// or ise hum aise bhi likh sakte hain bas syntax ka fark hai funtionality same hai;
	/*
		Tea(int serve, string name){
			servings = serve;
			teaName = name;
			cout << "Tea constructor called" << teaName << endl;
		}
	*/

	// Agar kisi class  me vertual function hai to usko hum Abstract class bhi  kehte hain
	virtual void brew() const
	{
		cout << "Brewing the tea " << teaName << endl;
	}

	virtual void serve() const
	{
		cout << "Serving " << servings << " cup of tea with generic Tea method !" << endl;
	}

	// base class destructor
	virtual ~Tea()
	{
		cout << "Tea destructor called for " << teaName << endl;
	}
};

// Derived/Child class for Tea  parant class
class MasalaTea : public Tea
{
public:
	// Inherited constructor from base class
	MasalaTea(int serve) : Tea(serve, "Masala Tea")
	{
		cout << "Masala Tea constructor called !" << endl;
	};

	// Overriding the base class method
	void brew() const override
	{
		cout << "Brewing the " << teaName << " with ginger , blackPaper and Elaychi " << endl;
	};

	// MasalaTea destructor
	~MasalaTea()
	{
		cout << "Masala Tea destructor called " << endl;
	}
};

class GreenTea : public Tea
{
public:
	GreenTea(int serve) : Tea(serve, "greenTea")
	{
		cout << "Green Tea constructor called " << endl;
	}

	// "final" keyword is used to prevent the overriding of the method from here only but can be overriden from the base class;
	void brew() const override final
	{
		cout << "Brewing the " << teaName << " with green tea leaves " << endl;
	}

	~GreenTea()
	{
		cout << "Green Tea destructor called !" << endl;
	}
};

int main()
{
	Tea *tea1 = new MasalaTea(2);
	Tea *tea2 = new GreenTea(1);

	tea1->brew(); // or tea1.brew(); only syntax ka fark hai
	tea2->brew(); // calling the overriden brew method of the derived class

	tea1->serve(); // calling the serve method of the base class
	tea2->serve(); // calling the serve method of the base class

	delete tea1, tea2; // delete the memory allocated to the object just beacuse we are using new keyword to create the object with pointers;

	return 0;
};