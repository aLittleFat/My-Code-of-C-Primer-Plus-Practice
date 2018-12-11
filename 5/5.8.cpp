#include <bits/stdc++.h>

using namespace std;

const int N = 1e5;

char s[N];

int main(){
	cout << "Enter words(to stop, type the word done):" << endl;
	int cnt = 0;
	while(cin >> s){
		if(strcmp(s, "done") == 0) break;
		++cnt;
	}
	cout << "You entered a total of " << cnt << " words" << endl;
    return 0;
}