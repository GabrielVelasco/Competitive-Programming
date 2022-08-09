//#include <bits/stdc++.h>
//#include "stdc++.h"
#include <stdio.h>
#include <string.h>

char str0[55], str1[55];

void compr(int *count, int len0, int len1){
    int i, j, tmp;
	for(i = 0; i < len0; i++){
		for(j = 0, tmp = 0; j < len1; j++, tmp = 0){

			int i2 = i; // copia de i e j
			int j2 = j; // 		||

			while( str0[i2] != '\0' && str1[j2] != '\0' && str0[i2] == str1[j2] ){
				i2++;
				j2++;
				tmp ++; // achou caract iguais
			}

			if( tmp > *count )
				*count = tmp;
		}
	}
}

int main(){

	while(gets(str0)){

		gets(str1);

		int count = 0;
		int len0 = strlen(str0);
		int len1 = strlen(str1);

		compr(&count, len0, len1);

		printf("%d\n", count);
		memset( str0, 0, sizeof(str0) );
        memset( str1, 0, sizeof(str1) );
	}

    return 0;
}