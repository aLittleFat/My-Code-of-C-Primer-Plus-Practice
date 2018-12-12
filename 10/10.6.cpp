#include <bits/stdc++.h>
using namespace std;
#include "Move.cpp"

int main(int argc, char const *argv[])
{
	Move a(1, 1);
	a.showmove();
	Move b(1, -1);
	b.showmove();
	Move c = a.add(b);
	c.showmove();
	c.reset(0, 0);
	c.showmove(); 
	return 0;
}