#include "Debt_1_Year.h"
#include<iostream>

Debt_1_Year::Debt_1_Year()
{
	this->debt = 220000000;
	this->rate = new float[12];
	for (int i = 0; i < 12; i++)
	{
		this->rate[i] = 0;
	}
}
void Debt_1_Year::Input_Rate()
{
	int thang = 0;
	std::cout << "Nhap thang thu bao nhieu ke tu khi muon: ";;
	std::cin >> thang;
	if (thang > 12 || thang <1)
	{
		return throw _EXCEPTION_;
	}
	else
	{
		float rate = 0;
		std::cout << "\nNhap lai thang thu " << thang << " ke tu khi muon: ";
		this->rate[thang - 1] = rate;
	}
}

float Debt_1_Year::Sum_Debt()	//Tổng nợ sau 1 năm
{
	float sum = 0;
	for (int i = 0; i < 12; i++)
	{
		sum += this->debt*(1 + this->rate[i]);
	}
	return sum;
}

void Debt_1_Year::input()
{
	std::cout << "INPUT YOUR DEBT IN 1 YEAR: ";
	std::cin >> this->debt;
}

Debt_1_Year::~Debt_1_Year()
{
	delete[] rate;
}
