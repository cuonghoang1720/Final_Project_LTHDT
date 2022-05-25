#pragma once
#include"Wife.h"
#include"Husband.h"
class FamilyPeople
{
private:
	float Salary;
	float OrtherIncome;
	Wife* wife;
	Husband* husband;
public:
	FamilyPeople();
	float Sum_salary();
	float Sum_OrtherIncome();
	~FamilyPeople();
};

