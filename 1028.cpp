#include <iostream>

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
using namespace std;
 
int main(){
	int n; scanf("%d", &n);
	getchar();
	while(n--){
		int a, b;
		scanf("%d%d", &a, &b);
		getchar();
		printf("%d\n", gcd(a, b) );
		
	}

	return 0;
}