#include <stdio.h>
 
int main(){
	int n; scanf("%d", &n);
	int q;
	for(q = 1; q <= n; q++){
	    printf("%d %d %d\n", q, q*q, q*q*q);
		printf("%d %d %d\n", q, (q*q)+1, (q*q*q)+1 );
	}

	return 0;
}