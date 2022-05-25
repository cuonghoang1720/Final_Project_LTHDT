#include "Debt.h"
#include <iostream>

Debt::Debt()
{
	this->debt1 = 220000000;
	this->debt3 = 100000000;
	this->interest_rate3 = 0.065;
	this->a = new float[12];		//mảng chứa lãi của các tháng
	for (int i = 0; i < 12; i++)
	{
		a[i] = 0;
	}
}
float Debt::Sum_Of_Interestrate3()	//tổng nợ debt1 phải trả sau 3 năm
{
	return this->debt3 * pow((1 + this->interest_rate3), 3);
}
void Debt::SetInterestrate1(int& month)	//month:tháng thứ bao nhiêu 
{//kể từ khi mượn
	if (month > 12)
	{
		std::cout << "khong hop le\n";
		return;
	}
	std::cout << "Nhap vao thang: ";
	std::cin >> month;
	int check = 0;	//đánh dấu tháng 
	float rate1 = 0;
	std::cout << "Nhap lai thang thu " << month;
	std::cin >> rate1;
	this->a[month-1] = rate1;
	return;
}
float Debt::Interestrate1(int month)	//Xuất ra tổng số nợ của kì hạn 1 năm
{											//tháng thứ month
	for (int i = 0; i < month; i++)
	{
		this->debt1 = this->debt1*(1 + a[i]);
	}
	return this->debt1;
}
float Debt::Sum_Of_Interestrate1()	//Tổng nợ phải trả sau 1 năm của kì hạn 1 năm
{
	float sum = 0;
	for (int i = 0; i < 12; i++)
	{
		sum += this->debt1 * (1 + a[i]);
	}
	return sum;
}
Debt::~Debt()
{
	delete[] this->a;
}