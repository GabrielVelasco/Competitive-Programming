#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

int main(){
    char exp[1050];
    while(scanf("%s", exp) != EOF){
        int len = strlen(exp), pair = 0; 
        for(int i = 0; i < len && pair >= 0; i++){
            if(exp[i] == '(')
                pair ++;
            if(exp[i] == ')')
                pair --;
        }
        if(pair == 0){
            printf("correct\n");
        }else{
            printf("incorrect\n");
        }
    }

    return 0;
}