#include <stdlib.h>
#include <stdio.h>

int vet[1200];

int main(){
    int n, i, f, a; scanf("%d%d%d", &n, &i, &f);
    for(a = 0; a < n; a++)
        scanf("%d", &vet[a]);
    int k, l, ans = 0;
    for(k = 0; k < n; k++){
        for(l = k+1; l < n; l++){
            int tmp = (vet[k] + vet[l]);
            if( tmp >= i && tmp <= f ){
                ans ++;
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}