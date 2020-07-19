#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define MAXV 510

int figCarimb[MAXV], figComradas[MAXV];
int n, c, m;

void testCase(){
	int ans = c;
	for(int i = 0; i < c; i++)
		cin >> figCarimb[i];
	
	for(int i = 0; i < m; i++)
		cin >> figComradas[i];

	// o problema consiste em contar quantas figurinhas carimbadas FALTAM na lista de
	// figurinhas compradas

	for(int i = 0; i < c; i++){
		for(int j = 0; j < m; j++){
			if(figCarimb[i] == figComradas[j]){
				ans --;
				break; // pode haver figurinhas repetidas na lista de figCompradas
			}
		}
	}
	
	cout << ans << endl;
}

int main(){
	cin >> n >> c >> m;
	testCase();
	
	return 0;
}