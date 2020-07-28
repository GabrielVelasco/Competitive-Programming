#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXS 100100

int even[MAXS], odd[MAXS], ev;

int compare(const void *p1, const void *p2){
    int a = *(int*)p1, 
        b = *(int*)p2;

    if(ev) return a - b; // even == increasing order
    else return b - a; // odd == decreasing order
}

int main(){
    int n, tmp, j = 0, k = 0; scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        if(tmp % 2 == 0){
            even[j] = tmp; j++;
        }else{
            odd[k] = tmp; k++;
        }
    }
    ev = 1;
    qsort(even, j, sizeof(int), compare);
    ev = 0;
    qsort(odd, k, sizeof(int), compare);

    for(int i = 0; i < j; i++)
        printf("%d\n", even[i]);

    for(int i = 0; i < k; i++)
            printf("%d\n", odd[i]);

    return 0;
}