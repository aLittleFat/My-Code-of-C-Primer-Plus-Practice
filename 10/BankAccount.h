#ifndef BankAccount_H_
#define BankAccount_H_

class BankAccount
{
private:
	string name_;
	string id_;
	double money_;
public:
	BankAccount();
	
	BankAccount(string name, string id, double money);

	void showAccount();

	void Deposit(double x);

	void Takeout(double x);
};

#endif

