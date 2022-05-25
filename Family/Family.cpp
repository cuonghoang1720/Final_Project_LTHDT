#include "Family.h"

Family::Family()
{
	this->expenses = new Expenses;
	this->account = new SavingAccount;
	this->debt = new Debt;
	this->familypeople = new FamilyPeople;
}
float Family::Sum_Debt()
{
	return this->debt->Sum_Of_Interestrate3() + this->debt->Sum_Of_Interestrate1();
}
float Family::Sum_Expenses()
{
	return this->expenses->getExpenses();
}
float Family::Sum_Money()
{
	return this->familypeople->Sum_OrtherIncome() + this->familypeople->Sum_salary();
}
Family::~Family()
{
}