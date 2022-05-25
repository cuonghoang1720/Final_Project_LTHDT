#pragma once
class Expenses
{
private:
	float Eating;
	float ElectricWater;
	float ortherExpenses;
public: 
	Expenses();
	void Set_Eating(float eating);
	void Set_ElectricWater(float elec_water);
	void Set_orther(float orther);
	float getExpenses();
	~Expenses();
};