#include <iostream>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
	int m, a, b, c; cin >> m >> a >> b;
	c = m - (a+b);
	int ans = max(a, max(b, c));
	cout << ans << endl;

	return 0;
}