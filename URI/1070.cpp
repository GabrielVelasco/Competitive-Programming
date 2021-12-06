#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, tmp = 0; cin >> n;
    while(tmp < 6){
        if(n % 2 != 0){
            cout << n << endl;
            tmp ++;
            n ++;
        }else
            n ++;
    }
 
    return 0;
}