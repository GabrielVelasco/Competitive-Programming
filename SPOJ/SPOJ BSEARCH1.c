//https://www.spoj.com/problems/BSEARCH1/
//https://www.youtube.com/watch?v=GU7DpgHINWQ
#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

int n, q;
ll vet[200000], tgt;

// in this case i want to find the FIRST element

int binSearch(){
	int l = 0, r = n-1, mid, res = -1;
	while(l <= r){
		mid = l + ((r-l)/2);
		if(vet[ mid ] == tgt){
		// even if the target has been found
		// maybe there could be the same target(number)
		// on the left, that is, maybe he is not the first one
		// so I need to verify the array [0,1, ... mid-1] to see if I have
		// the same target that comes first
			res = mid; 
			r = mid - 1;
		}else if(vet[ mid ] < tgt)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return res;
}

int main(){
	scanf("%d%d", &n, &q);
	int i;
	for(i = 0; i < n; i++)
		scanf("%lld", &vet[i]);

	while(q--){
		scanf("%lld", &tgt);
		printf("%d\n", binSearch());
	}

	return 0;
}