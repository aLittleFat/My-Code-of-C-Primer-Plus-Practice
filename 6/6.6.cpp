#include <bits/stdc++.h>

using namespace std;

struct Patron
{
	string name;
	double money;
	Patron(string name, double money):name(name),money(money){}
};

std::vector<Patron> vec;

int main(int argc, char const *argv[])
{
	cout << "Please Enter the Patrons" << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string name;
		double money;
		cin >> name >> money;
		vec.emplace_back(name, money);
	}
	int cnt = 0;
	for(auto i : vec){
		if(i.money >= 10000){
			++cnt;
		}
	}
	cout << "Grand Patrons" << endl;
	if(cnt == 0){
		cout << "none" << endl;
	}
	for(auto i : vec){
		if(i.money >= 10000){
			cout << i.name << " " << i.money << endl;
		}
	}	
	endl(cout);
	cout << "Others" << endl;
	if(n - cnt == 0){
		cout << "none" << endl;
	}
	for(auto i : vec){
		if(i.money < 10000){
			cout << i.name << " " << i.money << endl;
		}
	}
	return 0;
}