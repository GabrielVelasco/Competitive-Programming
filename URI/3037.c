#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int main(){
    int t; scanf("%d", &t);
    while(t--){
        int j = 3, m = 3, somJ = 0, somM = 0;
        while(j--){
            int x, d;
            scanf("%d%d", &x, &d);
            somJ += (x*d);
        }
        while(m--){
            int x, d;
            scanf("%d%d", &x, &d);
            somM += (x*d);
        }
        puts(somJ > somM ? "JOAO" : "MARIA");
    }

    return 0;
}