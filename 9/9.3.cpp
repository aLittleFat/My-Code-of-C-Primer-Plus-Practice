#include <bits/stdc++.h>

using namespace std;

struct chaff
{
	char dross[20];
	int slag;
};

const int BUF = 10000;

char buffer[BUF];

int main(int argc, char const *argv[])
{
	int n;
	cout << "Enter the length of the array" << endl;
	cin >> n;
	chaff * ch = new(buffer) chaff[n];
	for(int i = 0; i < n; ++i){
		char s[20];
		int slag;
		cin >> s >> slag;
		strcpy(ch[i].dross, s);
		ch[i].slag = slag;
	}
	for(int i = 0; i < n; ++i){
		cout << ch[i].dross << " " << ch[i].slag << endl;
	}
	return 0;
}