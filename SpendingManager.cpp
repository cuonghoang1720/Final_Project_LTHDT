#include "SpendingManager.h"


SpendingManager::SpendingManager()
{
	this->family = new Family;
}
SpendingManager::SpendingManager(Family* a)
{
	this->family = a;
}
float SpendingManager::extra_money()
{
	return this->family->Sum_Money() - this->family->Sum_Expenses();
}
void SpendingManager::check()
{
	float temp = this->family->get_Sum_Ortherincome() - this->family->Sum_Expenses();
	if (temp < 0)
	{
		std::cout << "negative money this month\n";
	}
	else
	{

	}
}
SpendingManager::~SpendingManager()
{
	delete this->family;
}

