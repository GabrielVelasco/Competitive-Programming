#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int main(){
	int n, i, sum = 0, test = 1;
	while(cin >> n){
		if(n == 0)	break;
		sum = 0;
		string exp; cin >> exp;
		istringstream token (exp);
		while(n --){
			int tmp;
			token >> tmp;
			sum += tmp;
		}
		printf("Teste %d\n", test++);
		printf("%d\n\n", sum);

	}

	return 0;
}