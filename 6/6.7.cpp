#include <bits/stdc++.h>

using namespace std;

string s;
int vowels, consonants, others;

string vowel = "aeiou";

int main(int argc, char const *argv[])
{
	cout << "Enter words (q to quit):" << endl;
	while(cin >> s){
		if(s == "q") break;
		char ch = tolower(s[0]);
		if(isalpha(ch)){
			if(vowel.find(ch) != -1){
				++vowels;
			}
			else{
				++consonants;
			}
		}
		else{
			++others;
		}
	}
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
	return 0;
}