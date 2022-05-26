#include "Debt_3_Years.h"
#include <iostream>

Debt_3_Years::Debt_3_Years()
{
	this->rate = 0.065;
	this->debt = 100000000;
}
void Debt_3_Years::Input_Rate()
{
	std::cout << "GET RATE: ";
	std::cin >> this->rate;
}
void Debt_3_Years::input()
{
	std::cout << "INPUT YOUR DEBT IN 3 YEAR: ";
	std::cin >> this->debt;
}
float Debt_3_Years::Sum_Debt()
{
	return this->debt * pow((1 + this->rate), 3);
}
Debt_3_Years::~Debt_3_Years()
{
}