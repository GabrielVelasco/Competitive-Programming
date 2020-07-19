//#include <bits/stdc++.h>
//#include "stdc++.h"

// EX: typedef long long ll;
// EX: #define VAR value
// scanf("%[^\n]s", s); Read C string(text) without gets()
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

struct datas{
	char string[55];
	int piv, len;
};

bool compare(datas a, datas b){
    if(a.len == b.len)  return a.piv < b.piv;
    return a.len > b.len;
}

datas strArray[55];

void testCase(){
    char s[3000];
    char aux[55];
    scanf("%[^\n]s", s);
    getchar();
    int i = 0, j = 0, piv = 0;
    // Divides string s (a text) into strings separated by space.
    while(s[i] != '\0'){
        if(s[i] != ' '){
            aux[j] = s[i];
        }else{
            aux[j] = '\0';
            strcpy(strArray[piv].string, aux);
            strArray[piv].len = strlen(aux);
        	strArray[piv].piv = piv;
            j = -1;
            piv ++;
        }
        i++;
        j++;
    }
    aux[j] = '\0';
    strArray[piv].piv = piv;
    strArray[piv].len = strlen(aux);
    strcpy(strArray[piv].string, aux);
    sort(strArray, strArray+(piv+1), compare);
    piv++;
    for(int i = 0; i < piv; i++){
        if(i != piv - 1)
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