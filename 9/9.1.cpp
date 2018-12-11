#include "golf.cpp"
#include <bits/stdc++.h>

using namespace std;

const int N = 10;

golf arr[N];

int main(int argc, char const *argv[])
{
	for (int i = 0; i < N; ++i)
	{
		if(setgolf(arr[i]) == 0) break;
		else showgolf(arr[i]);
	}
	return 0;
}