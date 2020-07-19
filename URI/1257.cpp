#include <stdio.h>
 
void testCase(){
    int l, i, j;
    int value = 0;
    scanf("%d", &l);
    getchar();

    for(i = 0; i < l; i++){

        char str[55];
        scanf("%s", str);

        for(j = 0; str[j] != '\0'; j++)
            value += (str[j] - 65) + i + j;

    }
    printf("%d\n", value);
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();

    while(t --){
        testCase();
    }

    return 0;
}