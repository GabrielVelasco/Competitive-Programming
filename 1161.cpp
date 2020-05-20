#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main(){
	vector<string> strVec;
	int t; cin >> t;
	while(t--){
		getchar();
		int a; cin >> a;
		while(a--){
			string str;
			cin >> str;
			strVec.push_back(str);
		}
		sort(strVec.begin(), strVec.end());
	}

	return 0;
}