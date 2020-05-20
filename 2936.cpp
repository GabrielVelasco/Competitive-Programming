#include <stdio.h>
 

int main(){
	
	int q, sum = 0;

	scanf("%d",&q);
	getchar();
	sum = sum + (q*300);

	scanf("%d",&q);
	getchar();
	sum = sum + (q*1500);

	scanf("%d",&q);
	getchar();
	sum = sum + (q*600);

	scanf("%d",&q);
	getchar();
	sum = sum + (q*1000);

	scanf("%d",&q);
	getchar();
	sum = sum + (q*150);

	printf("%d\n", sum+225);


    return 0;
}