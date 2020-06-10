#include <stdio.h>
#include <iostream>
#include <time.h>
#define max(a, b) a > b ? a : b;

using namespace std;

int mat[150][150];
int n;

int sumIJ_to_KL(int i, int j, int k, int l){
	int sum = 0;
		// Sum mat[i][j] -> mat[k][l]
	sum = mat[k][l] - mat[k][j-1] - mat[i-1][l] + mat[i-1][j-1];
	return sum;
}

void findSum(){
	int maxSum, ans = mat[1][1];
	int i, j, k, l;
	for(i = 1; i <= n; i++) for(j = 1; j <= n; j++){
			for(k = i; k <= n; k++) for(l = j+1; l <= n; l++){
					maxSum = sumIJ_to_KL(i, j, k, l); // Sum mat[i][j] -> mat[k][l]
					ans = max(ans, maxSum);
				}
		}

	printf("%d\n", ans);
}

int main(){
	//clock_t t = clock();
	
	scanf("%d", &n);
	int i, j;
		// Entering the values and cumulate
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &mat[i][j]);
			mat[i][j] += mat[i-1][j] + mat[i][j-1] - mat[i-1][j-1];
		}
	}
	findSum(); // runs over all submatrix inside the main matrix

	// t = clock() - t;
    // printf("Time elapsed: %f\n", (float)t/CLOCKS_PER_SEC);

	return 0;
}