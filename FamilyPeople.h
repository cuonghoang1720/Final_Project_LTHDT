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
	FamilyPeople(Wife* a, Husband* b);
	float Sum_salary();
	float Sum_OrtherIncome();
	~FamilyPeople();
};