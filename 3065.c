#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int tmp_value;
char tmp_exp[200];

int main(){
	int n, i, count = 0, j = 0, sum = 0, test = 1; 
	while(scanf("%d", &n)){
		if(n == 0)
			break;

		j = 0, sum = 0;
		char exp[200000]; scanf("%s", exp);
		int len = strlen(exp);
		for(i = 0; i < len; i++){
			count = 0;
			while(isdigit( exp[i + count] ) && exp[i + count] != '\0'){
				tmp_exp[j] = exp[i + count]; j++;
				count ++;
			}
			tmp_exp[j] = '\0'; j = 0;
			tmp_value = atoi(tmp_exp);
			memset(tmp_exp, 0, sizeof(tmp_exp));
			sum += tmp_value;
			i = (i + count); 
			if(exp[i] == '-' && exp[i] != '\0'){
				tmp_exp[j] = exp[i]; 
				j++;
			}
		}
		printf("Teste %d\n%d\n\n", test++, sum);
	}

	return 0;
}