#include <bits/stdc++.h>
using namespace std;
#include "BankAccount.cpp"



int main(int argc, char const *argv[])
{
	BankAccount ba("Alice", "1234567890", 100);
	ba.showAccount();
	ba.Deposit(200);
	ba.showAccount();
	ba.Deposit(10);
	ba.showAccount();
	return 0;
}