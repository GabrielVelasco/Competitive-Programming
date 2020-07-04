#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int l, c; scanf("%d%d", &l, &c);
    int i;
    long double parc, total = l*c;
    for(i = 10; i <= 90; i += 10){
    	parc = ceil(total*i/100.00);
    	if(i != 90)
    		printf("%.0Lf ", parc);
    	else 
    		printf("%.0Lf\n", parc);
    }

    return 0;
}