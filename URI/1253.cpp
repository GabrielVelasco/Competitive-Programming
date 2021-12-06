#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int t, i; scanf("%d", &t); getchar();
    while(t--){
        char str[55]; scanf("%s", str);
        int pos; scanf("%d", &pos); getchar();
        int len = strlen(str);
        for(i = 0; i < len; i++){
            if( ((int)str[i] - pos) < 'A' ){
                int tmp = 64 - ((int)str[i] - pos);
                printf("%c", (char)('Z' - tmp) );
            }else{
                printf("%c", (char)(str[i] - pos));
            }
        }
        printf("\n");
    }

    return 0;
}