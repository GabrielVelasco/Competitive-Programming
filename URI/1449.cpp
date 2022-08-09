//https://www.spoj.com/problems/BSEARCH1/
//https://www.youtube.com/watch?v=GU7DpgHINWQ
#include <iostream>
#include "bits/stdc++.h"

#define ll long long
using namespace std;

map<string, string> mapdici;

void solve(){
	int m, n; cin >> m >> n; getchar();
	while(m--){
		string jap, port;
		cin >> jap; getchar();
		getline(cin, port);
		mapdici[jap] = port;
	}
	while(n--){
		string lyrics, tmp; 
		getline(cin, lyrics);
		int len = lyrics.size();
		istringstream token (lyrics);
		bool ch = false;
		while(token >> tmp){
			if(mapdici[tmp] != ""){ // se existir esse index
				if(ch)
					cout << " " << mapdici[tmp]; // printa traducao
				else
					cout << mapdici[tmp];
			}else{ // se nao
				if(ch)
					cout << " " << tmp;
				else
					cout << tmp;
			}
			ch = true;
		}
		cout << endl;
	}
	cout << endl;
	mapdici.clear();
}

int main(){
	int t; cin >> t; getchar();

	while(t--){
		solve();
	}

	return 0;
}
