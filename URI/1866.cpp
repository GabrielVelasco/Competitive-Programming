#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int c, n;
    cin >> c;
    while( c > 0 ){
        cin >> n;
        if(n % 2 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
        c --;
    }

    return 0;
}