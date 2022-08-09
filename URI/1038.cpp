#include <iostream>
// a < b == crescente
// b < a == decrescente

int main(){
    int x, y;
    std::cin >> x >> y;
    if(x == 1){
        printf("Total: R$ %.2f\n", (float)4*y);
    }
    if(x == 2){
        printf("Total: R$ %.2f\n", (float)4.5*y);
    }
    if(x == 3){
        printf("Total: R$ %.2f\n", (float)5*y);
    }
    if(x == 4){
        printf("Total: R$ %.2f\n", (float)2*y);
    }
    if(x == 5){
        printf("Total: R$ %.2f\n", (float)1.5*y);
    }

    return 0;
}