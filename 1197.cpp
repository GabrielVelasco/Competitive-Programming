#include <stdio.h>
 
int main(){
	int v, t;
	while(scanf("%d%d", &v, &t) != EOF){
		printf("%d\n", t*2*v );
	}
	
	return 0;
}