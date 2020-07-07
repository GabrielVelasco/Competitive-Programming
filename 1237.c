#include <stdio.h>
#include <string.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

char str0[55], str1[55];
int count, len0, len1;

int compr(){
    int i, j, tmp;
	for(i = 0; i < len0; i++){
		for(j = 0; j < len1; j++){
			tmp = 0;
			int i2 = i; // copia de i e j
			int j2 = j; // 		||

			while( (str0[i2] == str1[j2]) && (str0[i2] != '\0' || str1[j2] != '\0') ){
				i2++;
				j2++;
				tmp ++; // achou caract iguais
			}

			count = max(count, tmp);
		}
	}
	return count;
}

int main(){
	// maior substring em sequencia
	while(scanf("%[^\n] %[^\n]", str0, str1) != EOF){
		getchar();
		count = 0;
		len0 = strlen(str0);
		len1 = strlen(str1);

		printf("%d\n", compr());
	}

    return 0;
}