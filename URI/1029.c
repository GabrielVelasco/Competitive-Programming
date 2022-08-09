#include <stdio.h>
#include <stdlib.h>

int calls;

long long fib(int n){
	calls ++;
	if(n < 2)	return n;

	return fib(n-1) + fib(n-2);
}

int main(){
	int n, x;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		calls = 0;
		long long fibb = fib(x);
		printf("fib(%d) = %d calls = %lld\n", x, calls-1, fibb);
	}
 
	return 0;
}