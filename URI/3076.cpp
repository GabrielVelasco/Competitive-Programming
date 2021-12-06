#include <iostream>

int main(){
    int a;
    while( std::cin >> a ){
        if(a == EOF)
            break;

        if(a >= 100 && a % 100 == 0){
            a = (a/100);
            printf("%d\n", a);
        }else{
            a = (a/100) + 1;
            printf("%d\n", a);
        }
    }

    return 0;
}