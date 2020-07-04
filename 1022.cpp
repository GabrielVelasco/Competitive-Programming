#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) { return (b) == 0 ? (a) : gcd(b, (a%b)); }

int main(){
	int t; scanf("%d", &t); getchar();
	while(t--){
		int num1, den1, num2, den2, numF, denF;
		char tmp, opc;
		scanf("%d", &num1); getchar();
		tmp = getchar();
		scanf("%d", &den1); getchar();
		opc = getchar();
		scanf("%d", &num2); getchar();
		tmp = getchar();
		scanf("%d", &den2); getchar();
		//cin >> num1 >> tmp >> den1 >> opc >> num2 >> tmp >> den2;
		if(opc == '+'){
			numF = (num1 * den2) + (num2 * den1);
			denF = (den1 * den2);
			printf("%d/%d = ", numF, denF);
			//cout << numF << '/' << denF << " = "; 
			int piv = gcd(numF, denF);
			numF /= abs(piv);
			denF /= abs(piv);
			printf("%d/%d\n", numF, denF);
			//cout << numF << '/' << denF << endl;
		}else if(opc == '-'){

			numF = (num1 * den2) - (num2 * den1);
			denF = (den1 * den2);
			printf("%d/%d = ", numF, denF);
			int piv = gcd(numF, denF);
			numF /= abs(piv);
			denF /= abs(piv);
			printf("%d/%d\n", numF, denF);
		}else if(opc == '*'){

			numF = (num1 * num2);
			denF = (den1 * den2);
			printf("%d/%d = ", numF, denF);
			int piv = gcd(numF, denF);
			numF /= abs(piv);
			denF /= abs(piv);
			printf("%d/%d\n", numF, denF);
		}else{

			numF = (num1 * den2);
			denF = (den1 * num2);
			printf("%d/%d = ", numF, denF);
			int piv = gcd(numF, denF);
			numF /= abs(piv);
			denF /= abs(piv);
			printf("%d/%d\n", numF, denF);
		}
	}
	
	return 0;
}