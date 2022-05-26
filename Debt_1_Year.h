#pragma once
#include"Debt.h"
class Debt_1_Year : public Debt 
{
private:
	float debt;	
	float* rate;
	
public:
	Debt_1_Year();
	void input();
	void Input_Rate();
	float Sum_Debt();
	~Debt_1_Year();
};


