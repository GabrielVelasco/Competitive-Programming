#include <stdio.h>
 
int main(){
    int x1, y1, x2, y2, i;

    while(1){
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break;
        if(x1 == x2 && y1 == y2){
            printf("0\n");
            continue;
        }

        if(x1 == x2 || y1 == y2){
            printf("1\n");
            continue;
        }

        for(i = 1; i <= 7; i++){
            if( ((x2 == i + x1) && (y2 == y1 - i)) || ((x2 == x1 - i) && (y2 == y1 - i)) || ((x2 == x1 - i) && (y2 == y1 + i)) || ((x2 == x1 + i) && (y2 == y1 + i)) ){
                printf("1\n");
                break;
            }else if (i == 7)
                printf("2\n");
        }   
    }

    return 0;
}