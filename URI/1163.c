#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int ans;
    char lastAli, tmp;
    char text[5100];
    while(scanf("%[^\n]", text) != EOF){
        getchar();
        ans = 0; lastAli = '*';
        tmp = tolower(text[0]);
        for(int i = 1; i < strlen(text); i++){
            if(text[i-1] == ' '){
                if(tolower(text[i]) == tmp && tmp != lastAli){
                    ans ++;
                    lastAli = tolower(text[i]);

                }else if(tolower(text[i]) != tmp){
                    tmp = tolower(text[i]);
                    lastAli = '*';
                }
            }
        }
        printf("%d\n", ans);
    }
    
    return 0;
}