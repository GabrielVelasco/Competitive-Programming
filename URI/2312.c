#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1100

int n, i;

struct paises{
	char name[50];
	int gold, silver, bronze;

}ppaises[550];

int compare(const void *p1, const void *p2){
	struct paises a = *(struct paises*)p1,
				  b = *(struct paises*)p2;
				  
	if(a.gold != b.gold)
		return b.gold - a.gold;

	else if(a.silver != b.silver)
		return b.silver - a.silver;

	else if(a.bronze != b.bronze)
		return b.bronze - a.bronze;

	else
		return strcmp(a.name, b.name);
}

int main(){
	scanf("%d", &n); getchar();
	for(i = 0; i < n; i++){
		scanf("%s", ppaises[i].name);
		scanf("%d%d%d", &ppaises[i].gold, &ppaises[i].silver, &ppaises[i].bronze);
		getchar();
	}

	qsort(ppaises, n, sizeof(struct paises), compare);

	for(i = 0; i < n; i++){
		printf("%s %d %d %d\n", ppaises[i].name, ppaises[i].gold,
							  ppaises[i].silver, ppaises[i].bronze);
	}

	return 0;
}