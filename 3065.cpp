#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int main(){
	int n, i, sum = 0, test = 1;
	while(cin >> n){ // n ==  qnts numeros tem na exp
		if(n == 0)	break;
		sum = 0;
		string exp; cin >> exp;
		istringstream token (exp); // token divide string exp por cada conjunto de caractere
		while(n --){ // n numeros na exp
			int tmp;
			token >> tmp; // a cada execucao passa um numero para tmp
			sum += tmp; // 1° tmp = 15, 2° tmp = -10 ... para exp = 15-10+ ...
		}
		printf("Teste %d\n", test++);
		printf("%d\n\n", sum);

	}

	return 0;
}