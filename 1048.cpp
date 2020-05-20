#include <iostream>
 
using namespace std;
 
int main() {
    float sal; cin >> sal;
    if(sal <= 400.00){
        printf("Novo salario: %.2f\n", sal*1.15);
        printf("Reajuste ganho: %.2f\n", 0.15*sal);
        printf("Em percentual: 15 %\n");
    }else if(sal <= 800.00){
        printf("Novo salario: %.2f\n", sal*1.12);
        printf("Reajuste ganho: %.2f\n", 0.12*sal);
        printf("Em percentual: 12 %\n");
    }else if(sal <= 1200.00){
        printf("Novo salario: %.2f\n", sal*1.1);
        printf("Reajuste ganho: %.2f\n", 0.1*sal);
        printf("Em percentual: 10 %\n");
    }else if(sal <= 2000.00){
        printf("Novo salario: %.2f\n", sal*1.07);
        printf("Reajuste ganho: %.2f\n", 0.07*sal);
        printf("Em percentual: 7 %\n");
    }else if(sal > 2000.00){
        printf("Novo salario: %.2f\n", sal*1.04);
        printf("Reajuste ganho: %.2f\n", 0.04*sal);
        printf("Em percentual: 4 %\n");
    }
 
    return 0;
}