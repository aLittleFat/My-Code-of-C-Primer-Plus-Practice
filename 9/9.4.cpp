#include "sales.cpp"
#include <bits/stdc++.h>

using namespace std;
using namespace SALES;

int main(int argc, char const *argv[])
{
	Sales s1, s2;
	setSales(s1);
	double a[] = {1.0, 2, 3, 4};
	setSales(s2, a, 4);
	showSales(s1);
	showSales(s2);
	return 0;
}