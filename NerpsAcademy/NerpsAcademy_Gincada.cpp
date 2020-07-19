//https://neps.academy/problem/3
#include <iostream>
#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int main(){
	ll n, m; 
	cin >> n >> m;
	while(gcd(n, m) != 1){
		m --;
	}
	cout << m << endl;

	return 0;
}