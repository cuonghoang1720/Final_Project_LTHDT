#pragma once
class Debt
{
private:
	float debt1;		//nợ 1 năm 
	float debt3;		//nợ 3 năm
	float interest_rate3;	//lãi của nợ 3 năm
	float* a;			//mảng chứa lãi của các tháng
public:
	Debt();
	float Sum_Of_Interestrate3();
	void SetInterestrate1(int& month);	//nhâp lãi từng tháng
	float Interestrate1(int month);
	float Sum_Of_Interestrate1();
	~Debt();
};

