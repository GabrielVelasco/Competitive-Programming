#include <stdio.h>
#include <math.h>
 
void testCase(){
	int x;
	scanf("%d", &x);
	getchar();
	printf("%lld kg\n", (long long)(pow(2, x)/12000) );
}

int main(){
	int n;
	scanf("%d", &n);
	getchar();
	while(n--){
		testCase();
	}
 
	return 0;
}