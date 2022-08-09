#include <stdio.h>
 
int main(){
    double A, B, MEDIA;
    float wA = 3.5, wB = 7.5;
    do{
        scanf("%lf %lf", &A, &B);
    }while( (A < 0.0 || A > 10.0) || (B < 0.0 || B > 10.0) );

    MEDIA = ( (A*wA) + (B*wB) ) / (wA + wB);

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}