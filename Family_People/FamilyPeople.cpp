#include "FamilyPeople.h"

FamilyPeople::FamilyPeople()
{
	this->Salary = 0;
	this->OrtherIncome = 0;
	this->wife = new Wife;
	this->husband = new Husband;
}
float FamilyPeople::Sum_salary()
{
	return this->wife->getSalary() + this->husband->getSalary();
}
float FamilyPeople::Sum_OrtherIncome() 
{
	return this->wife->getOrtherIncome() + this->husband->getOrtherIncome();
}
FamilyPeople::~FamilyPeople()
{
}
