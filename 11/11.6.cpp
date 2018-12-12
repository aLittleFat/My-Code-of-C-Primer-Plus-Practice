#include <bits/stdc++.h>
using namespace std;
#include "stonewt.cpp"

Stonewt st[6];

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 3; ++i)
	{
		st[i] = Stonewt(i * 10 + 5);
	}
	for (int i = 3; i < 6; ++i)
	{
		cout << "Enter the pounds of stones" << endl;
		double pounds;
		cin >> pounds;
		st[i] = Stonewt(pounds);
	}
	// for (int i = 0; i < 6; ++i)
	// {
	// 	st[i].show_lbs();
	// }
	Stonewt mx = st[0];
	Stonewt mi = st[0];
	Stonewt _11 = Stonewt(11);
	int cnt = 0;
	for (int i = 0; i < 6; ++i)
	{
		if(mi > st[i]){
			mi = st[i];
		}
		if(mx < st[i]){
			mx = st[i];
		}
		if(st[i] >= _11){
			++cnt;
		}
	}
	mi.show_lbs();
	mi.show_stn();
	mx.show_lbs();
	mx.show_stn();
	cout << cnt << endl;
	return 0;
}