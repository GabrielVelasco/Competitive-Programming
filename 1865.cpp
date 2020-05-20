#include <iostream>
#include "bits/stdc++.h"
// greater<int>() == decreasing order

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n; cin >> n;
	getchar();
	while(n--){
		string s; cin >> s;
		int c; cin >> c;
		getchar();
		if(s != "Thor")
			cout << "N\n";
		else
			cout << "Y\n";
	}

	return 0;
}