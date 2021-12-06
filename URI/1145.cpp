#include <iostream>             
using namespace std;

int main(){
    int x, y, c = 1; cin >> x >> y;
    for(int i=1; i <= y; i++){
        if(c == x){
            printf("%d\n", i);
            c = 1;
        }else{
            printf("%d ", i);
            c ++;
        }
    }

    return 0;
}
