#include <iostream>

using namespace std;

int main(){
	int sum = 0, tmp;
	int q; scanf("%d", &q); getchar();
	for(int i = 1; i <= q; i++){
		scanf("%d", &tmp); getchar();
		if(tmp == 1)
			sum ++;
	}
	if(sum < q-sum)
		printf("Y\n");
	else
		printf("N\n");


	return 0;
}	