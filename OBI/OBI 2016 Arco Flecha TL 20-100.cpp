// Time Limit 20/100
// Optimizar

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define MAXS 100500

using namespace std;

//int gcd(int a, int b) { return (b) == 0 ? (a) : gcd(b, (a%b)); }

int penal[MAXS]; // salva os calculos das penalidades
ld calcDist[MAXS];

int main(){
	int n, distSize = 0; cin >> n;
	int penCount = 0;
	ll xr, yr, zr;
	ld dist;
	for(int k = 1; k <= n; k++){
		cin >> xr >> yr;
		if(k == 1){
			penal[1] = 0;
			cout << penal[1] << endl;
			zr = (xr*xr) + (yr*yr);
			dist = sqrt(zr);
			// salva distancia da flecha K1 ao centro (0,0)
			calcDist[1] = dist; distSize ++;
		}else{
			xr += penal[k-1];
			yr += penal[k-1];
			zr = (xr*xr) + (yr*yr);
			dist = sqrt(zr); // calc dist ao centro (0,0)
			penCount = 0;
			for(int i = 1; i <= distSize; i++){
				if(calcDist[i] <= dist)
					penCount ++;
			}
			calcDist[k] = dist; distSize ++;
			penal[k] = penCount;
			cout << penal[k] << endl;
		}

	}
	
	return 0;
}