#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define MAXS 100500

using namespace std;

//int gcd(int a, int b) { return (b) == 0 ? (a) : gcd(b, (a%b)); }

int main(){
	int n, d, a; cin >> n >> d >> a;
	int countMov = 0;
	while(true){
		if(a == d){
			cout << countMov << endl;
			break;
		}else{
			countMov ++;
			if(a == n) // se estiver na ultima linha, o a++ deve na verdade voltar
				a = 1; // para a primeira linha
			else
				a++;
		}
	}
	
	return 0;
}