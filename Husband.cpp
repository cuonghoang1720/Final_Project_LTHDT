#include "Husband.h"
#include<iostream>

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
void Husband::input()
{
	std::cout << "INPUT YOUR SALARY: ";
	std::cin >> this->salary;
	std::cout << "SOME ORTHER INCOME: ";
	std::cin >> this->ortherincome;
}
Husband::~Husband()
{
}
