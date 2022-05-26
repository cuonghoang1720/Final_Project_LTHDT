#pragma once
class Wife
{
private:
	float salary;
	float ortherincome;
public:
	Wife();
	void setSalary(float salary);
	void setortherincome(float o_income);
	float getSalary();
	float getOrtherIncome();
	void input();
	~Wife();
};

