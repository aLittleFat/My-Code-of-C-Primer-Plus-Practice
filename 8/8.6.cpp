#include <bits/stdc++.h>

using namespace std;

template<typename T>
T maxn(T * arr, const int n){
	decltype(arr[0]) mx = arr[0];
	for(int i = 1; i < n; ++i){
		if(arr[i] > mx){
			mx = arr[i];
		}
	}
	return mx;
}

template<>
char * maxn(char ** arr, const int n){
	char * ans = arr[0];
	int mx = strlen(arr[0]);
	for(int i = 1; i < n; ++i){
		int len = strlen(arr[i]);
		if(len > mx){
			ans = arr[i];
			mx = len;
		}
	}
	return ans;
}


int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 3, 4, 5, 6};
	double b[] = {1.2, 2.5, 3.8, 100.1};
	char *s[] = {"abc", "def", "abcde", "x", "opqrs"};
	cout << maxn(a, 6) << endl;
	cout << maxn(b, 4) << endl;
	cout << maxn(s, 5) << endl;
	return 0;
}