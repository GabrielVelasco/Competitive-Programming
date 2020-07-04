#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>

using namespace std;

unordered_map<int, int> mapFuncMesa;

int main(){
    int n, q; cin >> n >> q;
    for(int i = 1; i <= n; i++)
        mapFuncMesa[i] = i;

    while(q--){
        int event; cin >> event;
        if(event == 1){ // update
            int a, b; cin >> a >> b;
            int tmp = mapFuncMesa[a];
            mapFuncMesa[a] = mapFuncMesa[b];
            mapFuncMesa[b] = tmp;
        }else{ // query
            int a; cin >> a;
            if(mapFuncMesa[a] == a)
                cout << 0 << endl;
            else{
                int c = 1, iq = mapFuncMesa[a];
                while(mapFuncMesa[iq] != a){
                    iq = mapFuncMesa[iq];
                    c ++;
                }
                cout << c << endl;
            }
        }
    }

    return 0;
}