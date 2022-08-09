#include <iostream>
#include "bits/stdc++.h"          
using namespace std;

struct freq{
    int index, count; //count == frequencia

    bool operator < (freq a){
        if(count == a.count) return index > a.index;
        else return count < a.count;
    }

};

void freqCount(freq cnt[], const string str){
    int len = str.size();
    for(int i = 0; i < len; i++){
        cnt[ str[i] ].index = str[i]; //cnt[65].index = 65, cnt[65].count ++; 
        cnt[ str[i] ].count ++;       //inicialmente index i e campo .index tem relação.
    }
}

int main(){
    string str;
    bool ch = false;
    freq cnt[230];

    while(cin >> str){
        if(ch)
            cout << endl;
        ch = true;

        memset(cnt, 0, sizeof(cnt)); //zera tudo 
        freqCount(cnt, str); //conta freq
        sort(cnt, cnt+200);

        for(int i = 0; i < 230; i++){
            if(cnt[i].count != 0)
                printf("%d %d\n", cnt[i].index, cnt[i].count);
        }

    }

    return 0;
}