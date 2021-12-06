#include <iostream>
using namespace std;
#define pi 3.14159

int main(){
    double r; 
    scanf("%lf", &r);
    double a = pi*r*r;
    printf("A=%.4lf\n", a);

    return 0;
}