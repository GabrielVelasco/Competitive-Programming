#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sinals{
    char sin1, sin2, sin3; 

}ssinals;

typedef struct wNames{
    char wname[55];

}swNames;

ssinals arrSin[55];
swNames arrWrong[55];

int compar(const void *p1, const void *p2){
    swNames a = *(swNames*)p1,
            b = *(swNames*)p2;

    return strcmp(a.wname, b.wname);
}

int main(){
    int t, n1, n2, n3, opc1;
    char opc;

    while(scanf("%d", &t) != EOF){
        for(int i = 1; i <= t; i++){
            scanf("%d%d%c%d", &n1, &n2, &opc, &n3);

            int verf = 0, j = 0;
            if(n1 + n2 == n3){
                arrSin[i].sin1 = '+';
                verf = 1;
            }
            if(n1 - n2 == n3){
                arrSin[i].sin2 = '-';
                verf = 1;
            }
            if(n1 * n2 == n3){
                arrSin[i].sin3 = '*';
                verf = 1;
            }

            if(!verf){
                arrSin[i].sin1 = 'I';
            }

        }

        char name[50], op;
        int id, ch, wCount = 0, rCount = 0;
        for(int i = 1; i <= t; i++){
            getchar();
            scanf("%s", name);
            scanf("%d", &id); getchar();
            op = getchar();

            if( (arrSin[ id ].sin1 == op) || (arrSin[ id ].sin2 == op) || (arrSin[ id ].sin3 == op) ){
                rCount ++;
                ch = 1;
                continue; 
            }

            strcpy(arrWrong[wCount].wname, name);
            wCount ++;
        }

        if(rCount == t){
            printf("You Shall All Pass!\n");
        }else if(wCount == t){
            printf("None Shall Pass!\n");
        }else{
            qsort(arrWrong, wCount, sizeof(swNames), compar);
            for(int i = 0; i < wCount; i++){
                if(i != wCount-1) 
                    printf("%s ", arrWrong[i].wname);
                else
                    printf("%s\n", arrWrong[i].wname);
            }
        }

        memset(arrSin, 0, sizeof(arrSin));
    }

    return 0;
}