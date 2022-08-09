#include <stdio.h>
#include <stdlib.h>

#define MAXV 510

int figCarimb[MAXV], figComradas[MAXV];
int n, c, m;

void testCase(){
	int ans = c, i, j;
	for(i = 0; i < c; i++)
		scanf("%d", &figCarimb[i]);
	
	for(i = 0; i < m; i++)
		scanf("%d", &figComradas[i]);

	// o problema consiste em contar quantas figurinhas carimbadas FALTAM na lista de
	// figurinhas compradas

	for(i = 0; i < c; i++){
		for(j = 0; j < m; j++){
			if(figCarimb[i] == figComradas[j]){
				ans --;
				break; // pode haver figurinhas repetidas na lista de figCompradas
			}
		}
	}
	
	printf("%d\n", ans);
}

int main(){
	scanf("%d%d%d", &n, &c, &m);
	testCase();
	
	return 0;
}