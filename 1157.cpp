#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N, i = 1;
    cin >> N;
    for(int i = 1; i <= N; i++){
        if(N % i == 0)
            cout << i << endl;
    }

    return 0;
}