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
SpendingManager::~SpendingManager()
{
	delete this->family;
}

