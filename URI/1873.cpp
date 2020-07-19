#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct datas{
    char mata[50];
    char morre[50][50];
}pecas[50];

void atribui(void){
    strcpy(pecas[0].mata, "tesoura"); // 0 representa a tesoura...
    strcpy(pecas[0].morre[0], "papel"); // cada linha e uma string
    strcpy(pecas[0].morre[1], "lagarto");

    strcpy(pecas[1].mata, "papel");
    strcpy(pecas[1].morre[0], "pedra"); 
    strcpy(pecas[1].morre[1], "spock");

    strcpy(pecas[2].mata, "pedra");
    strcpy(pecas[2].morre[0], "lagarto"); 
    strcpy(pecas[2].morre[1], "tesoura");

    strcpy(pecas[3].mata, "lagarto");
    strcpy(pecas[3].morre[0], "spock"); 
    strcpy(pecas[3].morre[1], "papel");

    strcpy(pecas[4].mata, "spock");
    strcpy(pecas[4].morre[0], "tesoura"); 
    strcpy(pecas[4].morre[1], "pedra");
}

int main(){
    int t, i; scanf("%d", &t); getchar();
    atribui();
    while(t--){
        char opc1[50], opc2[50];
        scanf("%s%s", opc1, opc2); // opc1 == Rajesh, opc2 == Sheldon
        if(strcmp(opc1, opc2) == 0){
            printf("empate\n");
            continue;
        }else{
            for(i = 0; i < 5; i++){
                if(strcmp(opc1, pecas[i].mata) == 0){
                    if(strcmp(opc2, pecas[i].morre[0]) == 0 || strcmp(opc2, pecas[i].morre[1]) == 0 )
                        printf("rajesh\n");
                    else
                        printf("sheldon\n");
                    break;
                }
            }
        }
    }

    return 0;
}