#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define MAXV 510

int vet[MAXV];
int n;

void testCase(){
	int i, j, k;
	for(i = 1; i <= n; i++)
		scanf("%d", &vet[i]); // entrada dos valores

	int a, b, ans = 1, cont = 0;

	// preciso testar todos os pares possíveis 
	// (vet[1] e vet[2], vet[1] e vet[3] ... vet[n-1] e vet[n])

	for(i = 1; i <= n; i++){
		for(j = i + 1; j <= n; j++){

			a = vet[i]; b = vet[j]; // A e B serão os pares do momento
			if(a != b)
				cont = 2; // ja tem duas marcacoes
			else
				continue; // são iguais, vai ter no maximo uma marcacao 
						  // continue parte para outro par
			
			for(k = j + 1; k <= n; k++){
				// A == primeiro numero, B == segundo numero
				// nao pode ter dois num iguais marcados consecutivamente
				// logo tenho que procurar por A
				if(vet[k] == a){
					cont ++;
					int tmp = a; // agora faz a troca swap(A, B)
					a = b;		 // A passa a ser o B (ultimo num)
					b = tmp;	 // B passa a ser o A (primeiro num, pelo qual devo procurar)
				}
			}
			ans = max(ans, cont);
		}

	}
	printf("%d\n", ans);;
}

int main(){
	scanf("%d", &n);
	if(n == 0)
		printf("0\n");
	else
		testCase();
	
	return 0;
}