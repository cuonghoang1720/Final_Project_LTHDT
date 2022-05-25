#pragma once
#include"Expenses.h"
#include"FamilyPeople.h"
#include"Wife.h"
#include"Husband.h"
#include"SavingAccount.h"
#include"Debt.h"
class Family
{
private:
	Expenses* expenses;
	Debt* debt;
	SavingAccount* account;
	FamilyPeople* familypeople;
public:
	Family();
	float Sum_Expenses();
	float Sum_Debt();
	float Sum_Money();
	~Family();
};

