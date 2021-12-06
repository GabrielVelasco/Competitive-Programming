#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _case_test(){
    char exp[1010];
    int op = 0, ans = 0;
    scanf("%s", exp);
    for(int i = 0; i < strlen(exp); i++){
        if(exp[i] == '<'){
            op ++;
        }else if(exp[i] == '>' && op){
            ans ++;
            op --;
        }
    }
    printf("%d\n", ans);
}  

int main(){
    int t; scanf("%d", &t); getchar();
    while(t--){
        _case_test();
    }

    return 0;
}