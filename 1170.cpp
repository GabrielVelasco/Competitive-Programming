#include <iostream>
 
using namespace std;
 
int main(){
	int n, count = 0; scanf("%d", &n);
	getchar();
	float c;
	while(n--){
		scanf("%f", &c);
		getchar();
		while(c > 1){
			c = c/2;
			count ++;
		}
		printf("%d dias\n", count);
		count = 0;
	}

	return 0;
}