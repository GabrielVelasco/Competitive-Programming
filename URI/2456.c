#include <stdio.h>
#include <stdlib.h>

int vet1[10], vetCres[10], vetDecr[10];

int cres(const void *p1, const void *p2){
    int a = *(int*)p1, 
        b = *(int*)p2;

    return a - b;
}

int decre(const void *p1, const void *p2){
    int a = *(int*)p1, 
        b = *(int*)p2;

    return b - a;
}

int main(){
    int i;
    for(i = 0; i < 5; i++){
        scanf("%d", &vet1[i]);
        vetCres[i] = vet1[i];
        vetDecr[i] = vet1[i];
    }

    qsort(vetCres, 5, sizeof(int), cres);
    qsort(vetDecr, 5, sizeof(int), decre);

    int contCres = 0, contDecr = 0;
    for(i = 0; i < 5; i++){
        if(vetCres[i] == vet1[i])   contCres ++;
        if(vetDecr[i] == vet1[i])   contDecr ++;
    }
    if(contDecr == 5)
        printf("D\n");
    else if(contCres == 5)
        printf("C\n");
    else
        printf("N\n");  
    
    return 0;
}