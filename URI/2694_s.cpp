#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // isdigit();
// https://www.urionlinejudge.com.br/judge/pt/problems/view/2694
// isdigit() return != 0 if true, otherwise 0

int sumDigits(char numArray[]){
	// Separate those 3 digits
	int acum = 0;
	char num[20], *p = strtok(numArray, " ");
	while(p != NULL){
		acum += atoi(p);
		p = strtok(NULL, " ");
	}	

	return acum;
}

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
