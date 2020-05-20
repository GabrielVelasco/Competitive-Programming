#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool comp(int a, int b){
	return a > b;
}

int main(){
	double vet[3];
	for(int i = 0; i < 3; i++)
		cin >> vet[i];
	sort(vet, vet+3, comp);

	if(vet[0] >= (vet[1] + vet[2]) )
		cout << "NAO FORMA TRIANGULO\n";
	else{
		if( (vet[0]*vet[0]) == ((vet[1]*vet[1]) + (vet[2]*vet[2])) )
			cout << "TRIANGULO RETANGULO\n";

		if( (vet[0]*vet[0]) > ((vet[1]*vet[1]) + (vet[2]*vet[2])) )
			cout << "TRIANGULO OBTUSANGULO\n";

		if( (vet[0]*vet[0]) < ((vet[1]*vet[1]) + (vet[2]*vet[2])) )
			cout << "TRIANGULO ACUTANGULO\n";

		if(vet[0] == vet[1] && vet[0] == vet[2])
			cout << "TRIANGULO EQUILATERO\n";
		else if(vet[0] == vet[1] || vet[0] == vet[2] || vet[1] == vet[2])
			cout << "TRIANGULO ISOSCELES\n";
	}

	return 0;
}