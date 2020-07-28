#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXS 10000

int n, num, pairCount;
int bootE[MAXS], bootD[MAXS];
char foot;

void testCase(){
	pairCount = 0;
	while(n--){
		scanf("%d", &num); getchar(); // boot number (index)
		foot = getchar();
		if(foot == 'E')
			bootE[num] ++;
		else
			bootD[num] ++;
		
		if(bootE[num] >= 1 && bootD[num] >= 1){ // I have one pair
			pairCount ++;
			bootE[num] --; // I used 2 boots to make one pair
			bootD[num] --;
		}
	}
	printf("%d\n", pairCount);
	memset(bootD, 0, sizeof(bootD));
	memset(bootE, 0, sizeof(bootE));
}


int main(){
	while(scanf("%d", &n) != EOF){
		testCase();
	}
	
	return 0;
}