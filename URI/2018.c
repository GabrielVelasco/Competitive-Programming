#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tmp[50];
int len = 0;

typedef struct datas{
    char nation[50];
    int gold, silver, bronze;

}sdatas;

sdatas dataArr[310];

int compare(const void *p1, const void *p2){
    sdatas a = *(sdatas*)p1, 
           b = *(sdatas*)p2;

    if(a.gold != b.gold)
        return b.gold - a.gold;

    else if(a.silver != b.silver)
        return b.silver - a.silver;

    else if(a.bronze != b.bronze)
        return b.bronze - a.bronze;

    else
        return strcmp(a.nation, b.nation);
}

int linSearch(int med){

    for(int i = 0; i < len; i++){
        if(strcmp(tmp, dataArr[i].nation) == 0){ // found it
            if(med == 1){
                dataArr[i].gold ++;

            }else if(med == 2){
                dataArr[i].silver ++;

            }else{
                dataArr[i].bronze ++;

            }

            return 1;
        }
    }

    return 0; // didn't found
}

int main(){
    while(scanf("%[^\n]", tmp) != EOF){
        getchar();

        for(int med = 1; med <= 3; med ++){ // medals
            scanf("%[^\n]", tmp); // read country
            getchar();

            if(med == 1){ // gold ++
                if(!linSearch(med)){
                    strcpy(dataArr[ len ].nation, tmp);
                    dataArr[ len ].gold ++;
                    len ++;
                }

            }else if(med == 2){ // silver ++
                if(!linSearch(med)){
                    strcpy(dataArr[ len ].nation, tmp);
                    dataArr[ len ].silver ++;
                    len ++;
                }

            }else{ // bronze ++
                if(!linSearch(med)){
                    strcpy(dataArr[ len ].nation, tmp);
                    dataArr[ len ].bronze ++;
                    len ++;
                }

            }

        }
    }

    qsort(dataArr, len, sizeof(sdatas), compare);

    printf("Quadro de Medalhas\n");
    for(int i = 0; i < len; i++)
        printf("%s %d %d %d\n", dataArr[i].nation, dataArr[i].gold, dataArr[i].silver, dataArr[i].bronze);
    

    return 0;
}