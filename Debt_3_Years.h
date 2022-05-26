#pragma once
#include"Debt.h"
class Debt_3_Years:public Debt
{
private:
	float debt;
	float rate;
public:
	Debt_3_Years();
	void input();
	void Input_Rate();
	float Sum_Debt();
	~Debt_3_Years();
};

