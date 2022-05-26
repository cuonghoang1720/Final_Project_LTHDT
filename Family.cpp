#include "Family.h"

Family::Family()
{
	this->expenses = new Expenses;
	this->account = new SavingAccount;
	this->debt1 = new Debt_1_Year;
	this->debt3 = new Debt_3_Years;
	this->familypeople = new FamilyPeople;
}

Family::Family(Expenses* exp, Debt* debt1_, Debt* debt3_, SavingAccount* account_, FamilyPeople* fam_)
{
	this->account = account_;
	this->debt1 = debt1_;
	this->debt3 = debt3_;
	this->expenses = exp;
	this->familypeople = fam_;
}

//Tổng chi phí
float Family::Sum_Expenses()
{
	return this->expenses->getExpenses();
}

//Tổng nợ phải trả
float Family::Sum_Debt()
{
	return this->debt1->Sum_Debt() + this->debt3->Sum_Debt();
}

//Tổng nguồn thu
float Family::Sum_Money()
{
	return this->familypeople->Sum_salary() + this->familypeople->Sum_OrtherIncome();
}

Family::~Family()
{
	delete this->account;
	delete this->debt1;
	delete this->debt3;
	delete this->expenses;
	delete this->familypeople;
}