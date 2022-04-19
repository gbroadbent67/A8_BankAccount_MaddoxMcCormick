//This program is designed to develop and implement a class that models the basic workings of a bank account
#include <iostream>
#include <iomanip>
#include <string>
#include "BankAccount.h"
//#include "BankAccount.cpp"
// using namespace BankAccount;
using namespace std;

char selection;
double depositAmount;
double withdrawAmount;



int main()
{
	BankAccount account = BankAccount();
	
while (selection < 8)
{
	cout << left << setw(40) << "Menu" << endl;
	cout << left << setw(40) << "-----------------------------------------------" << endl;
	cout << left << setw(40) << "1)	Display the account balance" << endl;
	cout << left << setw(40) << "2)	Display the number of transactions" << endl; // get transactions
	cout << left << setw(40) << "3)	Display interest earned for this period" << endl; // get interest
	cout << left << setw(40) << "4)	Make a deposit" << endl;
	cout << left << setw(40) << "5)	Make a withdrawal" << endl;
	cout << left << setw(40) << "6)	Add interest for this period" << endl;
	cout << left << setw(40) << "7)	Exit the program" << endl;

	cout << "Enter a number between 1-7: " << endl;
	cin >> selection;
	
	switch (selection) {
	case '1':
		account.getBalance();
		selection = 0;
		break;
	case '2':
		account.getTransactions();
		selection = 0;
		break;
	case '3':
		account.getInterest();
		selection = 0;
		break;
	case '4':
		account.makeDeposit(depositAmount);
		selection = 0;
		break;
	case '5':
		account.withdraw(withdrawAmount);
		selection = 0;
		break;
	case '6':
		account.calcInterest();
		selection = 0;
		break;
	case '7':
		cout << "Have a nice day! " << endl;
		exit(EXIT_FAILURE);
	default:
		cout << "You must make a selection between 1-7" << endl;
		cout << "Enter a number between 1-7: " << endl;
		cin >> selection;
	}
}



}





