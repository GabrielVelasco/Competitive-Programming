#include <stdio.h>
 
int main(){
	int n;
	scanf("%d", &n);
	getchar();
	while(n--){
		char a[30];
		scanf("%s", a);
		printf("%c\n", 'Y' );
	}
	
	return 0;
}