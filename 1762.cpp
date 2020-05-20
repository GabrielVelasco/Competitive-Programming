#include <iostream>
#include "bits/stdc++.h"
using namespace std;
// Na entrada do total de brinquedos: mymap["name_brinq"] = (float)peso;
// J == qntd cada brinqd
// Na entrada da lista pedidos: float acum = acum + (mymap["nome_digitado"] * J)
map<string, double> mymap;

void case_test(){
    mymap.clear();
    string n, p;
    double k, m, total = 0.0; // reseta total p cada case test
    int t, j; cin >> t; // num presentes
    getchar();
    for(int i = 0; i < t; i++){
        getline(cin, n); // nome
        cin >> k; // peso de uma und
        getchar();
        mymap[n] = k;
    }
    cin >> m; // capacidade um treno
    getchar();

    while(true){ // nome e qntd da lista pedidos
        getline(cin, p);
        cin >> j;
        getchar();
        if(p == "-" && j == 0){
            break;
        }else if(mymap[p] == 0){ // nao existe
            cout << "NAO LISTADO: " << p << endl;
            continue;
        }
        
        total += ( mymap[p] * j );
    }
    cout.precision(2);
    cout << "Peso total: " << fixed << total << " kg" << endl;
    int q1 = total / m;
    int q2 = (total / m) + 1;
    if( ((int)total % (int)m) == 0 )
        printf("Numero de trenos: %d\n", q1 );
    else 
        printf("Numero de trenos: %d\n", q2 );

}

int main(){
    int y; cin >> y;
    getchar();
    while(y --){
        case_test();
        cout << endl;
    }

    return 0;
}