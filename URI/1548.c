#include <stdio.h>
#include <stdlib.h>

#define MAX 1100

int chegada[MAX];
int notas[MAX]; 

int compare(const void *p1, const void *p2){
	int a = *(int*)p1, 
		b = *(int*)p2;

	return b - a;
}

int main(){
	int n; scanf("%d", &n);
	while(n--){
		int m, i; scanf("%d", &m); // numero alunos
		for(i = 0; i < m; i++){
			scanf("%d", &chegada[i]);
			notas[i] = chegada[i]; // copia
		}
		qsort(notas, m, sizeof(int), compare);
		int count = 0;
		for(i = 0; i < m; i++)
			if(chegada[i] == notas[i]) count ++;

		printf("%d\n", count);
	}

	return 0;
}