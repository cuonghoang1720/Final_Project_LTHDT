#pragma once
#include "Debt.h"
#include"Debt_1_Year.h"
#include"Debt_3_Years.h"
#include"Husband.h"
#include"Wife.h"
#include"Family.h"
#include"FamilyPeople.h"
#include"SavingAccount.h"
#include"Expenses.h"
class Family
{
private:
	Expenses* expenses;
	Debt* debt1;
	Debt* debt3;
	SavingAccount* account;
	FamilyPeople* familypeople;
	float money;
public:
	Family();
	Family(Expenses* exp, Debt* debt1_, Debt* debt3_, SavingAccount* account_, FamilyPeople* fam_);
	float Sum_Expenses();
	float get_Sum_Ortherincome();
	float get_Sum_salary();
	float Sum_Debt();
	float Sum_Money();
	void Money_To_Saving();
	~Family();
};

