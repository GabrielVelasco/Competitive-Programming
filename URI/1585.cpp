#include <stdio.h>
#include <stdlib.h>

#define ll long long

int main(){
	int pip; scanf("%d", &pip);
	while(pip --){
		int a, b; scanf("%d%d", &a, &b);
		printf("%d cm2\n", a*b/2);
	}

	return 0;
}