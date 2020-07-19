#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define MAXS 100500

char V[MAXS], D[MAXS];
int n, m;

int compare(const void *a, const void *b){

    if( *(char*)a < *(char*)b )
        return 1; // b via na frente de a
    else if( *(char*)a > *(char*)b )
        return -1;
    else
        return 0;

}

int main(){
    scanf("%d%d", &n, &m); getchar();
    char tmp[5];
    int j = 0, k = 0, i;
    for(i = 0; i < (n*m); i++){
        scanf("%s", tmp); getchar();

        if(tmp[1] == 'V'){
            V[j] = tmp[0]; j++; // usa {} por que tem 2 linhas (V[j] = ...; e j++;)
        }else{
            D[k] = tmp[0]; k++;
        }
    }

    qsort(V, j, sizeof(char), compare);
    qsort(D, k, sizeof(char), compare);

    for(i = 0; i < j; i++){
        printf("%cV\n", V[i]);
    }
    for(i = 0; i < k; i++)
        printf("%cD\n", D[i]);

    return 0;
}