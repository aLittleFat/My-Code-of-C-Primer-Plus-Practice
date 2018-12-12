#include <bits/stdc++.h>
using namespace std;
#include "Person.cpp"

int main(int argc, char const *argv[])
{
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	one.FormalShow();
	cout << endl;
	two.Show();
	two.FormalShow();
	cout << endl;
	three.Show();
	three.FormalShow();
	return 0;
}