#include <iostream>

using namespace std;

// Encapsulation: Encapsulation is the process of wrapping up of data (variables) and functions into a single unit called class.
// Encapsulation is used to hide the values or state of a structured data object inside a class, preventing unauthorized parties' direct access to them.
// Encapsulation is used to restrict access to the internal state of an object and to protect the object's integrity.

class BankDetails
{
private:
	string accNumber;
	double balance;
	string accHolderName;
	string accType;

public:
	BankDetails(string accNum, double intialBalance, string accName, string acType)
	{
		accNumber = accNum;
		balance = intialBalance;
		accHolderName = accName;
		accType = acType;
	};

	// get account balance check
	double getBalance() const
	{
		return balance;
	};

	// deposit money
	void depositMoney(double amount)
	{
		if (amount > 0)
		{
			balance += amount;
			cout << "Deposited Amount: " << amount << endl;
		}
		else
		{
			cout << "Invalid amount deposit...!" << endl;
		}
	};

	// withdraw money
	void withDrawMoney(double amount)
	{
		if (balance > 0 && amount <= balance && amount > 0)
		{
			balance -= amount;
			cout << "Withdraw Amount: " << amount << endl;
		}
		else if (amount > balance)
		{
			cout << "Insufficient balance...!" << endl;
		}
		else
		{
			cout << "Invalid amount withdraw...!" << endl;
		}
	};

	// print account holder information
	void
	printAccountHolderInfo() const
	{
		cout << "Account Holder Name: " << accHolderName << endl;
		cout << "Account Number: " << accNumber << endl;
		cout << "Account Type: " << accType << endl;
	};
}

;

int main()
{
	BankDetails myAcc1("123456789", 1000, "John Doe", "Savings");

	cout << "Account Balance: " << myAcc1.getBalance() << endl;
	myAcc1.printAccountHolderInfo();

	myAcc1.depositMoney(500);
	cout << "Account Balance after deposit: " << myAcc1.getBalance() << endl;

	myAcc1.withDrawMoney(200);
	cout << "Account Balance after withdraw: " << myAcc1.getBalance() << endl;

	return 0;
};
