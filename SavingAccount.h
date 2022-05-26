#pragma once
class SavingAccount
{
private: 
	float savingMoney;
	float InterestRate;
	int option;			//option 1:kỳ hạn 6 tháng,option 2:kỳ hạn 12 tháng
public:
	SavingAccount();
	void setSavingMoney(float money);
	void setInterestRate(float rate);
	float findInterest();
	void input();
	~SavingAccount();
};


