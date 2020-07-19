#include <stdio.h>
#include <stdlib.h>

#define MAXS 10500

int vet[MAXS];
int n, q;

int compare(const void *p1, const void *p2){
    int a = *(int*)p1, 
        b = *(int*)p2;

    return a - b;
}

int binSerach(int cons){
    int l = 0, 
        r = n-1, m, ans = -1;

    while(l <= r){
        m = l + ((r-l)/2);
        if(vet[m] == cons){
            ans = m;
            r =  m - 1;
        }else if(vet[m] < cons)
            l = m + 1;
        else
            r = m - 1;
    }

    return ans;
}

int main(){
    int tc = 1;
    while(scanf("%d%d", &n, &q)){
        if(n == 0 && q == 0)
            break;
        printf("CASE# %d:\n", tc++);
        int i;
        for(i = 0; i < n; i++)
            scanf("%d", &vet[i]);
        qsort(vet, n, sizeof(int), compare);
        while(q--){
            int cons; scanf("%d", &cons);
            int ans = binSerach(cons);
            if(ans == -1){
                printf("%d not found\n", cons);
            }else{
                printf("%d found at %d\n", cons, ans+1);
            }
        }  
    }

    return 0;
}
