#pragma once
class Debt
{
private:

public:
	Debt();
	virtual void Input_Rate()=0;
	virtual float Sum_Debt()=0;
	virtual void input() = 0;
	~Debt();
};

