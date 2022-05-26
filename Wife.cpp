#include "Wife.h"
#include<iostream>

Wife::Wife()
{
	this->salary = 0;
	this->ortherincome = 0;
}
void Wife::setSalary(float salary)
{
	this->salary = salary;
}
void Wife::setortherincome(float o_income)
{
	this->ortherincome = o_income;
}
float Wife::getSalary()
{
	return this->salary;
}
float Wife::getOrtherIncome()
{
	return this->ortherincome;
}
void Wife::input()
{
	std::cout << "INPUT YOUR SALARY: ";
	std::cin >> this->salary;
	std::cout << "SOME ORTHER INCOME: ";
	std::cin >> this->ortherincome;
}
Wife::~Wife()
{
}
