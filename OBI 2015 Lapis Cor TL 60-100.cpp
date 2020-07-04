// Time Limit 60/100
// precisa de optimização

#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define MAXS 1500
#define MAXV 2500

using namespace std;

//int gcd(int a, int b) { return (b) == 0 ? (a) : gcd(b, (a%b)); }

char sheet[MAXS][MAXS];
vector<pair<int, int> > zerosCord; // salva cordenadas de todos os 0's

int main(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> sheet[i][j];
			if(sheet[i][j] == '0'){
				zerosCord.push_back(make_pair(i, j));
			}
		}
	}

	int zSize = zerosCord.size();
	int distF, distT;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			distF = MAXV; distT = MAXV;
			if(sheet[i][j] == '*'){
				// calc D min entre i, j e um dos 0's q estar no vector
				for(int a = 0; a < zSize; a++){ // a percorre zerosCord
					int tmpI, tmpJ;
					distT = distF; // salva dist anterior para pds pegar o min
					tmpI = abs(i - zerosCord[a].first);
					tmpJ = abs(j - zerosCord[a].second);
					distF = tmpI + tmpJ; // dist final
					if(distF == 1){ // e o mais perto
						break;
					}else{
						// distF == acabou de calc, distT == calc anteriormente (a-1)
						distF = min(distF, distT);
					}
				}
				if(distF >= 9)
					sheet[i][j] = '9';
				else
					sheet[i][j] = (char)(distF + 48);
			}

			cout << sheet[i][j];
		}
		cout << endl;
	}

	return 0;
}