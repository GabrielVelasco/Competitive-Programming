#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (((a) > (b)) ? (a) : (b))

int main(){
    int m, a, b, c; scanf("%d%d%d", &m, &a, &b);
    c = m - (a+b);
    int ans = max(a, max(b, c));
    printf("%d\n", ans);

    return 0;
}