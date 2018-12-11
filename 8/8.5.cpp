#include <bits/stdc++.h>

using namespace std;

template<typename T>
T max5(T * arr){
	decltype(arr[0]) mx = arr[0];
	for(int i = 1; i < 5; ++i){
		if(arr[i] > mx){
			mx = arr[i];
		}
	}
	return mx;
}

int main(int argc, char const *argv[])
{
	int a[] = {1, 2, 3, 4, 5};
	double b[] = {1.2, 2.5, 3.8, 100.1, 0.0};
	cout << max5(a) << endl;
	cout << max5(b) << endl;
	return 0;
}