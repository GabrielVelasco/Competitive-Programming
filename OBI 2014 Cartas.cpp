#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//int gcd(int a, int b) { return (b) == 0 ? (a) : gcd(b, (a%b)); }

int vet1[10], vetCres[10], vetDecr[10];

int main(){
	for(int i = 0; i < 5; i++){
		cin >> vet1[i];
		vetCres[i] = vet1[i];
		vetDecr[i] = vet1[i];
	}
	sort(vetCres, vetCres+5);
	sort(vetDecr, vetDecr+5, greater<int>() );
	int contCres = 0, contDecr = 0;
	for(int i = 0; i < 5; i++){
		if(vetCres[i] == vet1[i])	contCres ++;
		if(vetDecr[i] == vet1[i])	contDecr ++;
	}
	if(contDecr == 5)
		cout << "D\n";
	else if(contCres == 5)
		cout << "C\n";
	else
		cout << "N\n";	
	
	return 0;
}