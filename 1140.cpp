#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while(getline(cin, s)){
		if(s == "*")
			break;
		int len = s.size(), nWords = 1, count = 1, i = 0;
		char c = s[0];
		while(s[i] != '\0'){
			if(s[i] == ' '){
				nWords ++;
				if(s[i+1] == c || s[i+1] == c + 32 || s[i+1] == c - 32)
					count ++;
			}
			i++;
		}
		puts(nWords == count ? "Y" : "N");
	}

	return 0;
}