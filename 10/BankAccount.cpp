#include "BankAccount.h"

BankAccount::BankAccount(){};

BankAccount::BankAccount(string name, string id, double money = 0){
	name_ = name;
	id_ = id;
	money_ = money;
}

void BankAccount::showAccount(){
	cout << name_ << " " << id_ << " " << money_ << endl;
}

void BankAccount::Deposit(double x){
	money_ += x;
}

void BankAccount::Takeout(double x){
	if(money_ < x){
		cout << "Can't takeout!" << endl;
	}
	else{
		money_ -= x;
	}
}
