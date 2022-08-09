#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main(){
	int n; scanf("%d", &n); getchar();
	while(n--){
		char a[55], b[55], c;
		int lenA, lenB, countA = 0, i; 	// countA == how many characters from str A have been added at str c
		int ai, bi, countB = 0;
		scanf("%s%s", a, b);
		lenA = strlen(a);
		lenB = strlen(b);
		for(i = 0, ai = 0, bi = 0; i < (lenB + lenA); i++){
			if( (i % 2 == 0) && (countA < lenA) ){	// A (first str) will always be at even indexes at str C
				c = a[ai];						    // ai runs inside str a
				ai ++;								// bi runs inside str b
				countA ++;
				printf("%c", c);
			}else if(countB < lenB){
					c = b[bi];
					bi ++;
					countB ++;
					printf("%c", c);
				  }else{							// extrapolou str b
				  	c = a[ai]; 
				  	ai ++;
				  	printf("%c", c);
				  }		  
		}
		printf("\n");
	}

	return 0;
}