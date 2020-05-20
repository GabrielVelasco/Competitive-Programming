#include <stdio.h>
 
int main() {
    int i, j;
	for(i = 1; i <= 9; i += 2){
		for(j = 6; j >= 4; j --){
			printf("I=%d J=%d\n", i, i+j);
		}
	}

 
    return 0;
}