#include "Expenses.h"

Expenses::Expenses()
{
	this->Eating = 0;
	this->ElectricWater = 0;
	this->ortherExpenses = 0;
}
void Expenses::Set_Eating(float eating)
{
	this->Eating = eating;
}
void Expenses::Set_ElectricWater(float elec_water)
{
	this->ElectricWater = elec_water;
}
void Expenses::Set_orther(float orther)
{
	this->ortherExpenses = orther;
}
float Expenses::getExpenses()
{
	return this->Eating + this->ElectricWater + this->ortherExpenses;
}
Expenses::~Expenses()
{
}