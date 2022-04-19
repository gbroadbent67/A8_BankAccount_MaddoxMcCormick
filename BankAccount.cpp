#include <iostream>
#include <iomanip>
#include <string>
#include "BankAccount.h"
using namespace std;


void BankAccount::getValues(double balance, double interestRate)
{
	 balance = 0;
	 interestRate = 0.045;
	this->balance = balance;
	this->interestRate = interestRate;
}

void BankAccount::setInterestRate(double interestRate)
{
	//this->interestRate = interestRate;
	//char interestChangeYN;
	cout << "Enter the interest rate: " << endl;
	cin >> interestRate;
	
}

void BankAccount::makeDeposit(double depositAmount)
{
	cout << "Please enter amount to deposit: " << endl;
	cin >> depositAmount;
	newBalance = balance + depositAmount;
	transactions++;
}

void BankAccount::withdraw(double withdrawAmount)
{

	cout << "Please enter amount to withdraw: " << endl;
	cin >> withdrawAmount;
	if (balance >= withdrawAmount)
	{
		balance = balance - withdrawAmount; 
		transactions++;
	}
	else
	{
		cout << "Insufficient funds to complete transaction" << endl;
		cout << "Please enter amount to withdraw: " << endl;
		cin >> withdrawAmount;
	}
}

void BankAccount::calcInterest()
{

	char interestChangeYN;

	getValues(balance, interestRate);
	
	cout << left << setw(40) << "The current interest rate is: " << setprecision(3) << fixed << interestRate << endl;
	cout << "Do you wish to change it?" << endl;
	cin >> interestChangeYN;
	if (toupper(interestChangeYN) == 'Y')
	{
		setInterestRate(interestRate);
	}

	interest = newBalance * interestRate;
	newBalance = newBalance + interest;
	cout << "Interest Calculated " << setprecision(3) << fixed << interest << endl;
}

double BankAccount::getInterestRate()
{
	this->interestRate = interestRate;
	cout << "The current interest rate is : " << setprecision(3) << fixed << this->interestRate << endl;
	return interestRate;
}

double BankAccount::getBalance()
{
	if (transactions < 1)
	{
		getValues(balance, interestRate);
		cout << "The current interest rate is : " << setprecision(3) << fixed << this->interestRate << endl;
		cout << "Your balance is: " << setprecision(2) << fixed << balance << endl;
	}
	else
	{
		this->balance = newBalance;
		cout << "Your balance is: " << setprecision(4) << fixed << balance << endl;
	}
	return balance;
}

double BankAccount::getInterest()
{
	calcInterest();
	cout << "Your interest is: " << interest << endl;
	return interest;
}

int BankAccount::getTransactions()
{
	this->transactions = transactions;
	cout << "The amount of transactions made today: " << transactions << endl;
	return transactions;
}