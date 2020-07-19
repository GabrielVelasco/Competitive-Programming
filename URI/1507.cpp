#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXS 100500
#define false 0
#define true 1

char str[MAXS], sstr[150];

int verfStr(){
    int i, j, str_l = strlen(str), sstr_l = strlen(sstr);
    int count = 0, ch = false;

    for(j = 0, i = 0; j < str_l; j++){
        if(sstr[i] == str[j]){
            count ++;
            i ++;
            j ++;

            while( (sstr[i] == str[j]) && (i < sstr_l && j < str_l) ){
                count ++;  
                i ++;
                j ++;
            }
            if(count == sstr_l)
                return true;
        }
    }

    return false;
}

int main(){
    int n, q; scanf("%d", &n); getchar();
    while(n--){
        scanf("%s", str);
        scanf("%d", &q); getchar();
        while(q--){
            scanf("%s", sstr);
            if(verfStr()){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }

    }

    return 0;
}
