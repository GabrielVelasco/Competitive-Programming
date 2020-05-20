#include <stdio.h>
 
int main(){

	int n; scanf("%d", &n);
	getchar();
	int i, sum = 0;;
	for(i = 0; i < n; i++){
		int t, v;
		scanf("%d%d", &t, &v);
		sum += t*v;
	}
	printf("%d\n", sum);

	return 0;
}