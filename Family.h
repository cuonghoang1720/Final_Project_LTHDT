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
public:
	Family();
	Family(Expenses* exp, Debt* debt1_, Debt* debt3_, SavingAccount* account_, FamilyPeople* fam_);
	float Sum_Expenses();
	float Sum_Debt();
	float Sum_Money();
	~Family();
};

