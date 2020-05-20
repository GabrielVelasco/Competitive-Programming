#include <iostream>
#include "bits/stdc++.h"
using namespace std;

struct renas{
    char s[200];
    int p, i;
    float a;
};

bool compare(renas a, renas b){
    if(a.p == b.p){
        if(a.i != b.i) return a.i < b.i;

        else if(a.a != b.a) return a.a < b.a;


        else return a.s < b.s;
    }else
        return a.p > b.p;

}

renas myrenas[1000];
int cen = 1;

void printResult(const int m){
    cout << "CENARIO {" << cen << "}\n";
    for(int j = 0; j < m; j++)
        printf("%d - %s\n", j+1, myrenas[j].s);
    
    cen ++;
}

void case_test(){
    int n, m; cin >> n >> m;
    cin.ignore();
    for(int j = 0; j < n; j++){
        scanf("%s", myrenas[j].s);
        scanf("%d%d", &myrenas[j].p, &myrenas[j].i);
        scanf("%f", &myrenas[j].a);
    }
    sort(myrenas, myrenas+n, compare);
    printResult(m);
}

int main(){
    int t; cin >> t;
    while(t --){
        case_test();
        memset(myrenas, 0, sizeof(myrenas));
    }

    return 0;
}
