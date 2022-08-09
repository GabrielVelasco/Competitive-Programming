//https://neps.academy/problem/8
#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int vet[3];

void sorti(){
	int k;
	bool ch = true;
	while(ch){
		
		ch = false;
		for(k = 1; k < 3; k++){
			if(vet[k-1] > vet[k]){
				int tmp = vet[k-1];
				vet[k-1] = vet[k];
				vet[k] = tmp;
				ch = true;
			}
		}

	}
}


int main(){
	int n, count = 0, sum; cin >> n; 
	cin >> vet[0] >> vet[1] >> vet[2];
	sum = vet[0] + vet[1] + vet[2];
	if(n >= sum)
		cout << "3" << endl;
	else{
		sorti(); // crescente
		for(int i = 0; i < 3; i++){
			if(vet[i] <= n){
				count ++;
				n -= vet[i];	
			}
		}
		cout << count << endl;
	}

	return 0;
}