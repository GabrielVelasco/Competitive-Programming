#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

//int gcd(int a, int b) { return (b) == 0 ? (a) : gcd(b, (a%b)); }

int primNUm[50], k, vetSize;

void primeFac(int n) {
   // calculate all prime factors of a number N
   k = 0;
   while(n % 2 == 0){
   	  primNUm[k] = 2; k++;
      n = n/2;
   }
   for(int i = 3; i <= sqrt(n); i = i+2){
      while(n % i == 0){
      	 primNUm[k] = i; k++;
         n = n/i;
      }
   }
   if(n > 2)
   primNUm[k] = n;
   if(primNUm[k] == 0) k --;
   vetSize = k+1;
}

int calcNumDiv(){
	int ans = 1, bkp, piv, tmp;
	for(int i = 0; i < vetSize; i+=bkp){
		tmp = primNUm[i], 
		piv = 1, bkp = 1;
		while( (primNUm[i + piv] == tmp) && ((i + piv) < vetSize) ){
			piv ++;
			bkp ++;
		}
		piv ++;
		ans *= piv;
	}
	return ans;
}

int main(){
	int n; cin >> n;
	primeFac(n); // calcula fatores primos de N
	cout << calcNumDiv() << endl;
	
	return 0;
}