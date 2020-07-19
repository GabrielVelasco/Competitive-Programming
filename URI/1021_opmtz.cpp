#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//100, 50, 20, 10, 5, 2.
//1, 0.50, 0.25, 0.10, 0.05 e 0.01

int main(){
	float n; cin >> n;
	int temp;
	cout << "NOTAS:" << endl;
	printf("%d nota(s) de R$ 100.00\n", (int)n/100);
	n = fmod(n, 100);

	printf("%d nota(s) de R$ 50.00\n", (int)n/50);
	n = fmod(n, 50);

	printf("%d nota(s) de R$ 20.00\n", (int)n/20);
	n = fmod(n, 20);

	printf("%d nota(s) de R$ 10.00\n", (int)n/10);
	n = fmod(n, 10);

	printf("%d nota(s) de R$ 5.00\n", (int)n/5);
	n = fmod(n, 5);

	printf("%d nota(s) de R$ 2.00\n", (int)n/2);
	n = fmod(n, 2);

	cout << "MOEDAS:\n";
	temp = n/1;
	printf("%d moeda(s) de R$ 1.00\n", temp);
	n = fmod(n, 1.0);

	temp = n/0.5;
	printf("%d moeda(s) de R$ 0.50\n", temp);
	n = fmod(n, 0.5);

	temp = n/0.25;
	printf("%d moeda(s) de R$ 0.25\n", temp);
	n = fmod(n, 0.25);

	temp = n/0.1;
	printf("%d moeda(s) de R$ 0.10\n", temp);
	n = fmod(n, 0.1);

	temp = n/0.05;
	printf("%d moeda(s) de R$ 0.05\n",temp);
	n = fmod(n, 0.05);

	temp = n/0.01+0.1;
	printf("%d moeda(s) de R$ 0.01\n", temp);
	n = fmod(n, 0.01);

	return 0;
}