#include "Debt_1_Year.h"
#include<iostream>

Debt_1_Year::Debt_1_Year()
{
	this->debt = 220000000;
	this->rate = 0;
}
void Debt_1_Year::Input_Rate()
{
	std::cout << "GET RATE IN THIS MONTH OF DEBT 1 YEAR: ";
	std::cin >> this->rate;
}

float Debt_1_Year::Sum_Debt()	//Tổng nợ sau 1 năm
{
	return this->debt * (1 + this->rate);
}

void Debt_1_Year::input()
{
	std::cout << "INPUT YOUR DEBT IN 1 YEAR: ";
	std::cin >> this->debt;
}

Debt_1_Year::~Debt_1_Year()
{
}
