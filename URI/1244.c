#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct datas{
    char string[55];
    int piv, len;

}ddatas;

ddatas strArray[55];

int compare(const void *p1, const void *p2){
    ddatas a = *(struct datas*)p1, 
          b = *(struct datas*)p2;

    if(a.len != b.len)
        return b.len - a.len;
    else
        return a.piv - b.piv;
}

void testCase(){
    char s[3000];
    char aux[55];
    scanf("%[^\n]", s); getchar();
    int i = 0, j = 0, piv = 0;
    // Divides string s (a text) into strings separated by space.
    while(s[i] != '\0'){
        if(s[i] != ' '){
            aux[j] = s[i]; j++;
        }else{
            aux[j] = '\0'; j++;
            strcpy(strArray[piv].string, aux);
            strArray[piv].len = strlen(aux);
            strArray[piv].piv = piv; piv ++;
            j = 0;
        }
        i++;
    }
    aux[j] = '\0';
    strArray[piv].piv = piv;
    strArray[piv].len = strlen(aux);
    strcpy(strArray[piv].string, aux);

    qsort(strArray, piv+1, sizeof(struct datas), compare);
    for(int i = 0; i <= piv; i++){
        if(i != piv)
            printf("%s ", strArray[i].string);
        else
            printf("%s\n", strArray[i].string);
    }    
    memset(strArray, 0, sizeof(strArray));
}

int main(){
    int t; scanf("%d", &t);
    getchar();
    while(t--){
        testCase();
    }

    return 0;
}