#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int vet[3000000];

void printResult(const int& n){
    for(int i = 0; i < n; i++){
        if(i != (n - 1) )
            printf("%d ", vet[i]);
        else 
            printf("%d\n", vet[i]);
    }
    memset(vet, 0, sizeof(vet));
}

void case_test(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    sort(vet, vet+n);
    printResult(n);
}

int main(){
    int nc; cin >> nc;
    while(nc --){ 
        case_test();
    }

    return 0;
}
