#include <bits/stdc++.h>

using namespace std;

struct CandyBar
{
	string bandname;
	double weight;
	int heat;
};

void setCandyBar(CandyBar & candyBar, const char * bandname = "Millennium Munch", const double weight = 2.85, const int heat = 350){
	candyBar.bandname = bandname;
	candyBar.weight = weight;
	candyBar.heat = heat;
}

void showCandyBar(const CandyBar & candyBar){
	cout << candyBar.bandname << " " << candyBar.weight << " " << candyBar.heat << endl;
}

int main(int argc, char const *argv[])
{
	CandyBar candyBar;
	setCandyBar(candyBar);
	showCandyBar(candyBar);
	return 0;
}