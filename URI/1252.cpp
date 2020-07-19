#include <stdlib.h>
#include <stdio.h>

int vet[10500];
int n, m;

int compare(const void *p1, const void *p2){
    int a = *(int*)p1; // cast p1/p2 para ponteiro p/ int e acessa o conteudo pra qual p1/p2 
    int b = *(int*)p2; // aponta

    // return <0 -> a vai antes de b
    // return 0  -> nao muda
    // return >0 -> a vai depois de b

    if( (a % m) == (b % m) ){

        if( (a % 2 == 0 && b % 2 != 0) )
            return 1; // b vai na frente
        else if( (b % 2 == 0 && a % 2 != 0) )
            return -1; // a via na frente

        if( (a % 2 != 0 && b % 2 != 0) )
            return b - a;

        if( (a % 2 == 0 && b % 2 == 0) )  
            return a - b;

    }else   
        return (a % m) - (b % m);
    
}

int main(){
    int i;
    while(scanf("%d%d", &n, &m)){
        if(n == 0 && m == 0){
            printf("0 0\n");;
            break;
        }
        for(i = 0; i < n; i++)
            scanf("%d", &vet[i]);

        qsort(vet, n, sizeof(int), compare);

        printf("%d %d\n", n, m);
        for(i = 0; i < n; i++)
            printf("%d\n", vet[i]);      
    }

    return 0;
}