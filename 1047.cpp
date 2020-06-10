#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include "bits/stdc++.h"

#define MinDay 1440
#define ll long long

using namespace std;

void tCase(){
	int hi, mi, hf, mf; cin >> hi >> mi >> hf >> mf;
	int prtM, prtH;
	if(hf <= hi){
		hi = (60*hi) + mi;
		hf = (60*hf) + mf;
		hi = abs(hi - hf);
		if(mf <= mi){
			hi = MinDay - hi;
		}
		prtH = hi / 60;
		if(prtH == 0)
			prtM = hi;
		else
			prtM = hi % 60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", prtH, prtM);
	}else{
		hi = (60*hi) + mi;
		hf = (60*hf) + mf;
		hi = abs(hi - hf);
		prtH = hi / 60;
		if(prtH == 0)
			prtM = hi;
		else
			prtM = hi % 60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", prtH, prtM);
	}
}

int main(){
	tCase();

	return 0;
}