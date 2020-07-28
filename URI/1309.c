#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ll long long
#define true 1
#define false 0

/*

    sprintf(strC, "format %d %c %s ... ", int, char, string, ... );
    store 'format ...' at strC, 
    
    Ex: sprintf(strC, "TEST %d %c %d", 12300, 'T', 4);
    strC: [TEST 12300 T 4]

*/

int main(){
    int num1, num2;
    char num1Str[150];
    while(scanf("%d%d", &num1, &num2) != EOF){
        sprintf(num1Str, "%d", num1); // convert num1 and num2 to C str
        int len = strlen(num1Str);
        int m = 0, cont = 0, ch = false;
        printf("$");
        if(len > 3){
            m = len % 3;
            for(int i = 0; i < m; i++){
                printf("%c", num1Str[i]);
                ch = true;
            }
        }
        if(ch)
            printf(",");
        for(int i = m; i < len; i++){
            printf("%c", num1Str[i]);
            cont ++;
            if( (cont == 3) && (i != (len - 1)) ){
                printf(",");
                cont = 0;
            }else if(cont == 3){
                printf(".");
                ch = true;
            }
        }
        if(!ch)
            printf(".");
        if(num2 < 10){
            printf("0%d\n", num2);
        }else{
            printf("%d\n", num2);
        }
    }

    return 0;
}