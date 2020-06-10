#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <unordered_map>
#include "bits/stdc++.h"

#define MinDay 1440
#define ll long long

using namespace std;

unordered_map<int, int> wmap;

void tCase(){
	int ans = 0;
	string num; cin >> num;
	for(int i = 0; i < num.size(); i++){
		ans += wmap[ (int)(num[i] - 48) ];
	}
	cout << ans << " leds" << endl;
}

int main(){
	wmap[1] = 2;
	wmap[2] = 5;
	wmap[3] = 5;
	wmap[4] = 4;
	wmap[5] = 5;
	wmap[6] = 6;
	wmap[7] = 3;
	wmap[8] = 7;
	wmap[9] = 6;
	wmap[0] = 6;

	int n; cin >> n; getchar();
	while(n--){
		tCase();
	}
	return 0;
}