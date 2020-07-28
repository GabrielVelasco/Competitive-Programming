#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

typedef struct Tshirt{
    char name[50], color[50];
    char size;

}Tshirt;

Tshirt arrTshirt[65];

int compare(const void *p1, const void *p2){
    Tshirt a = *(Tshirt*)p1, 
           b = *(Tshirt*)p2;

    // color ascending order -> size descending order -> name ascending order
    if(strcmp(a.color, b.color) == 0){ // color are equal
        if(a.size != b.size)
            return b.size - a.size;
        else
            return strcmp(a.name, b.name);

    }else{
        return strcmp(a.color, b.color);
    }
}

void printResult(int len){
    for(int i = 0; i < len; i++)
        printf("%s %c %s\n", arrTshirt[i].color, arrTshirt[i].size, arrTshirt[i].name);
}

int main(){
    int n, ch = false;
    while(scanf("%d", &n)){
        if(n == 0)
            break;
        if(ch)
            printf("\n");
        for(int i = 0; i < n; i++){
            getchar();
            scanf("%[^\n]s", arrTshirt[i].name); // read name
            scanf("%s", arrTshirt[i].color); // read color and size
            getchar();
            arrTshirt[i].size = getchar();
            //printf("\nTEST: %s, %s, %c\n", arrTshirt[i].name, arrTshirt[i].color, arrTshirt[i].size);
        }
        qsort(arrTshirt, n, sizeof(Tshirt), compare);
        printResult(n);
        ch = true;
    }

    return 0;
}