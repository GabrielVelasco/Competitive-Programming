#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, c; cin >> n >> c;
    vector<int> arrInfectantes;
    unordered_map<int, bool> mapInfectados;
    while(c --){
        int infectante, qntd;
        cin >> infectante >> qntd;
        arrInfectantes.push_back(infectante);
        int infectado;
        for(int i = 0; i < qntd; i++){
            cin >> infectado;
            mapInfectados[infectado] = true;
        }
    }
    vector<int> ans;
    int len = arrInfectantes.size();
    for(int i = 0; i < len; i++)
        if(mapInfectados.find( arrInfectantes[i] ) == mapInfectados.end()) // nao achou
            ans.push_back(arrInfectantes[i]); // arrInfectantes[i] eh uma resposta
    
    len = ans.size();
    sort(ans.begin(), ans.end());
    for(int i = 0; i < len; i++){
        cout << ans[i] << endl;
    }

    return 0;
}