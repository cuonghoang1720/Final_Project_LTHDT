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
void SavingAccount::choose_option(int option)
{
	this->option = option;
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

SavingAccount::~SavingAccount()
{
}