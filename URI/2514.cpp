#include <iostream>
 
using namespace std;
 
int m, l1, l2, l3;
int num, den, tmp;
int l1l2;

void gcd(int l1, int l2){
		if(l1 > l2){
			num = l1;
			den = l2;
		}else{
			num = l2;
			den = l1;
		}

		while(num % den != 0){
			tmp = num % den;
			num = den;
			den = tmp;
		}
		l1l2 = den;
}

int main(){
	// MMC * MDC = A*B
	// mmc(a, b) == a*b / gcd(a, b)
	while(scanf("%d", &m) != EOF){

		getchar();
		scanf("%d%d%d", &l1, &l2, &l3);
		getchar();
		gcd(l1, l2); // a == 1, gcd(l1, l2)
		int a = (l1*l2) / l1l2; // mmc(l1, l2)
		gcd(a, l3); // gcd(a, l3)
		l1l2 = (a*l3) / l1l2; // mmc(a, l3)
		cout << l1l2 - m << endl;
		
	}

	return 0;
}