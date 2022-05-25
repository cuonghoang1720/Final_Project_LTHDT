#include "Husband.h"

Husband::Husband()
{
	this->salary = 0;
	this->ortherincome = 0;
}
void Husband::setSalary(float salary)
{
	this->salary = salary;
}
void Husband::setortherincome(float o_income)
{
	this->ortherincome = o_income;
}
float Husband::getSalary()
{
	return this->salary;
}
float Husband::getOrtherIncome()
{
	return this->ortherincome;
}
Husband::~Husband()
{
}
