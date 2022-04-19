#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#ifndef BANKACCOUNT
#define BANKACCOUNT

class BankAccount
{
private:
	double balance;
	double newBalance;
	double interestRate;
	double interest;
	int transactions;

public:
	void getValues(double, double);
	//void Constructor();
	void setInterestRate(double);
	void makeDeposit(double);
	void withdraw(double);
	void calcInterest();
	double getInterestRate();
	double getBalance();
	double getInterest();
	int getTransactions();
		
};


#endif 
