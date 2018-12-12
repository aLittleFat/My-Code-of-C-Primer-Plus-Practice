#include <bits/stdc++.h>
using namespace std;
#include "golf.cpp"

const int N = 10;

golf arr[N];

int main(int argc, char const *argv[])
{
	for(int i = 0; i < N; ++i){
		if(arr[i].setgolf() == 0) break;
		else arr[i].show();
	}
	return 0;
}