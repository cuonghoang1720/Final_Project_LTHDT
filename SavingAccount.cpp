#include "SavingAccount.h"
#include <iostream>

SavingAccount::SavingAccount()
{
	this->option = 0;
	this->savingMoney = 0;
	this->InterestRate = 0;
}
void SavingAccount::setSavingMoney(float money)
{
	this->savingMoney = money;
}
void SavingAccount::setInterestRate(float rate)
{
	this->InterestRate = rate;
}
float SavingAccount::findInterest()
{
	if (this->option == 1)	//kỳ hạn 6 tháng
	{
		return this->savingMoney * pow((1 + this->InterestRate), 6);
	}
	if (this->option == 2)	//kỳ hạn 12 tháng
	{
		return this->savingMoney * pow((1 + this->InterestRate), 12);
	}
}
void SavingAccount::input()
{
	std::cout << "CHOOSE OPTION RATE: \n1.6 MONTH\n2. 12 MONTH\n";
	std::cin >> this->option;
	std::cout << "GET SAVING MONEY: ";
	std::cin >> this->savingMoney;
}

SavingAccount::~SavingAccount()
{
}