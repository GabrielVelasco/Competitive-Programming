// Same UVa 108 but now using max sub-array sum
// https://youtu.be/r9W4f5UyMMM

#include <stdlib.h>
#include <string.h>

#define max(a, b) ((a) > (b)) ? (a) : (b)
#define maxNM 101
#define ll long long

ll vet[maxNM], vet2[maxNM];
ll mat[maxNM][maxNM];
int n;

ll maxArraySum(){
    ll sum = 0, ans = vet[1];
    for(int i = 1; i <= n; i++) {
        sum += vet[i];
        ans = max(ans, sum);
        if(sum < 0)
            sum = 0;
    }
    return ans;
}

int main(){

    scanf("%d", &n);
    int i, k, j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            scanf("%lld", &mat[i][j]);

    ll finalAns = mat[1][1];
    for(i = 1; i <= n; i++){
        memset(vet, 0, sizeof(vet));
        for(k = i; k <= n; k++){            // for i range(1, N) && for K range(i, N)
            j = 1;
            while(j <= n){
                vet[j] += mat[k][j];
                j++;
            }
            finalAns = max(finalAns, maxArraySum());
        }
    }

    printf("%lld\n", finalAns);;

    return 0;
}