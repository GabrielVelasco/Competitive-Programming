#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortev(int a, int b){
	return a < b;
}

bool sortod(int a, int b){
	return a > b;
}

int main(){
	vector<int> ev, od;
	int n, iev = 0, iod = 0, tmp;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		if(tmp % 2 == 0){
			ev.push_back( int() );
			ev[iev] = tmp;
			iev ++;

		}else{
			od.push_back( int() );
			od[iod] = tmp;
			iod ++;
		}
	}
	sort(ev.begin(), ev.end(), sortev);
	sort(od.begin(), od.end(), sortod);
	for(int x: ev){
		cout << x << endl;
	}
	for(int x: od){
		cout << x << endl;
	}

	return 0;
}