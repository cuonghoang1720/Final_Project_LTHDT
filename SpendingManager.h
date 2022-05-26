#pragma once
#include<iostream>
#include "Debt.h"
#include"Debt_1_Year.h"
#include"Debt_3_Years.h"
#include"Husband.h"
#include"Wife.h"
#include"Family.h"
#include"FamilyPeople.h"
#include"SavingAccount.h"

class SpendingManager
{
private:
	Family* family;
public:
	SpendingManager();
	SpendingManager(Family* a);
	float extra_money();
	void check();
	~SpendingManager();
};

