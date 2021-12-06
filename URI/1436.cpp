#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ll long long
#define max(a, b) a > b ? a : b

int calcRaf(int x, int y){
	return (9*x*x) + (y*y);
}

int calcBeto(int x, int y){
	return (x*x*2) + (25*y*y);
}


int calcCarlos(int x, int y){
	return (-100*x) + (y*y*y);
}


int main(){
	int t, ans; scanf("%d", &t);
	while(t--){
		int x, y; scanf("%d%d", &x, &y);
		int raf, beto, carlos;
		raf = calcRaf(x, y);
		beto = calcBeto(x, y);
		carlos = calcCarlos(x, y);
		ans = max(raf, beto);
		ans = max(ans, carlos);
		if(ans == raf)
			printf("Rafael ganhou\n");
		else if(ans == beto)
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");
	}
	
	return 0;
}