#include <stdio.h>
 
int main(){
    int e_numb, e_hours;
    float price_hour;

    scanf("%d%d%f",&e_numb, &e_hours, &price_hour);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", e_numb, (e_hours*price_hour) );

    return 0;
}