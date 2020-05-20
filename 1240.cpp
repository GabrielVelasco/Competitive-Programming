#include <iostream>
#include "bits/stdc++.h"
#include <cstring>
//https://www.spoj.com/problems/BSEARCH1/
typedef long long ll;

using namespace std;

int main(){
	int n, len1, len2, count = 0; scanf("%d", &n);
	int i, j;
	getchar();
	char num1[1001], num2[1001];
	while(n--){
		count = 0;
		scanf("%s%s", num1, num2);
		len1 = strlen(num1);
		len2 = strlen(num2);
		if(len2 <= len1){
			i = len1 - 1;
			j = len2 - 1;
			while(num1[i] == num2[j] && j >= 0){
				count ++;
				i --;
				j --;
			}
			if(count == len2)
				printf("encaixa\n");
			else
				printf("nao encaixa\n");			
		}else
			printf("nao encaixa\n");
	}

	return 0;
}