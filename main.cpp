#include<iostream>
#include "Debt.h"
#include"Debt_1_Year.h"
#include"Debt_3_Years.h"
#include"Husband.h"
#include"Wife.h"
#include"Family.h"
#include"FamilyPeople.h"
#include"SavingAccount.h"
#include"Expenses.h"
#include"SpendingManager.h"

using namespace std;

int main()
{
	cout << "---------------------SPENDING MANAGEMENT--------------------------\n\n";
	//
	Wife* wife_ = new Wife;
	Husband* husband_ = new Husband{};
	//
	Debt* debt1_ = new Debt_1_Year;
	Debt* debt3_ = new Debt_3_Years;
	//
	Expenses* exp_ = new Expenses;
	
	//Tính nợ 3 năm (người dùng chỉ nhập 1 lần)
	debt3_->input();
	debt3_->Input_Rate();
	cout << endl;
	debt1_->input();
	cout << endl;

	int month = 0;
	do
	{
		cout << "GET MONTH: ";
		cin >> month;
		cout << "-----------------INCOME-----------------\n";

		//Lương và những thu nhập cơ bản

		wife_->input();

		husband_->input();

		FamilyPeople* a = new FamilyPeople(wife_, husband_);

		cout << "Tong Luong: " << a->Sum_salary() << endl;

		cout << "Tong thu nhap khac: " << a->Sum_OrtherIncome() << endl;

		cout << "-----------------DEBT-----------------\n";

		debt1_->Input_Rate();

		cout << "-----------------EXPENSE-----------------\n";

		//Chi phí khác
		exp_->INPUT_EXPENSES();

		//Tài khoản tiết kiệm

		SavingAccount* acc_ = new SavingAccount;

		//acc_->input();

		Family* f_ = new Family(exp_, debt1_, debt3_, acc_, a);

		SpendingManager* spm_ = new SpendingManager(f_);

		cout << "EXTRA MONEY: " << spm_->extra_money() << endl;

		cout << endl;

	} while (month>0 && month <13);
	
	return 0;
}