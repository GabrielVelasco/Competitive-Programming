#include <stdio.h>
#include <math.h>
#include <string>
#include <ctype.h> // isdigit();
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2694
// isdigit() return != 0 if true, otherwise 0

int sumDigits(char numArray[]);

int main(){
	int n, c, j = 1, i; scanf("%d", &n);
	char numArray[15];
	while(n){
		c = 0;
		char numb[20]; scanf("%s", numb);
		// Remove characters from string numb
		// by copying the numbers to numArray
		// adding a space between two number at numArray
		for(i = 0; i < strlen(numb); i++){
			if( isdigit(numb[i]) ){ // is digit? (integer value)
				numArray[c] = numb[i];
				c++;
				j = 1;
				while(numb[i+j] >= 48 && numb[i+j] <= 57){
					numArray[c] = numb[i+j];
					j++;
					c++;
				}
				i += j;
				numArray[c] = ' ';
				c++;
			}
		}
		numArray[c] = '\0'; // numArray is a string with numbers separated by space
		printf("%d\n", sumDigits(numArray) );
		n --;
	}

	return 0;
}

int sumDigits(char numArray[]){
	// Separate those 3 digits
	char num1[15];
	int i = 0, j = 0, acum = 0, k;
	while(1){
		if(numArray[i] != ' ' && numArray[i] != '\0'){
			num1[j] = numArray[i];
			j ++;
		}else{
			if(numArray[i] == '\0')
				break;
			num1[j] = '\0';
			j = 0;
			int len = strlen(num1); // if 123 == 3 digits

			// calculate "weight" of the first digit of the number
			// if 3 digits, fisrt digit must be multip by 10^2 == 100 | ex: 123 ->  (1)*10^2 == 100
			// 123 == (1)*10^2 + (2)*10^1 + (3)*10^0 == (100 + 20 + 3)
			int piv = pow(10, len - 1); // 10^(len-1) == "weight" of the first digit

			// (int)(num1[i] - 48) -> convert num1[i] from ascii to its real integer value 
			acum += ( (int)(num1[0] - 48) * piv ); // Ex: if num1 == 123, so num1[0] == 1 -> 1*10^2
			piv /= 10;
			for(k = 1; k < len; k++, piv /= 10){
				acum += ( ( (int)(num1[k] - 48) ) * piv );
			}
		}
		i++;
	}
	return acum;
}
