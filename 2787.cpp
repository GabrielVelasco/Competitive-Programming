#include <stdlib.h>
#include <stdio.h>

int main(){
    int l, c; scanf("%d%d", &l, &c);
    l += c;
    if(l % 2 == 0)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}