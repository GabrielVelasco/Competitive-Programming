#include <iostream>
#include "bits/stdc++.h"

typedef long long ll;

using namespace std;

int t;
vector<string> wa;
vector<string> arrayExp;

void testCase(){
    wa.clear();
    arrayExp.clear();
    for(int i = 0; i < t; i++){
        string tmp;
        int num1, num2, num3;
        char opc;
        cin >> num1 >> num2 >> opc >> num3;

        bool ok = false;
        if(num1 + num2 == num3){
            tmp.push_back('+');
            ok = true;
        }

        if(num1 - num2 == num3){
            tmp.push_back('-');
            ok = true;
        }
    
        if(num1 * num2 == num3){
            tmp.push_back('*');
            ok = true;
        }

        if(!ok){
            tmp.push_back('I');
        }
        arrayExp.push_back(tmp);
        tmp.clear();
    }

    int rightCount = 0, wrongCount = 0;
    for(int i = 0; i < t; i ++){
        string name; cin >> name;
        int idChosen; cin >> idChosen;
        char opc; cin >> opc;

        if(arrayExp[ idChosen - 1 ].find(opc) != string::npos){
            rightCount ++;
        }else{
            wrongCount ++;
            wa.push_back(name);
        }
    }

    if(rightCount == t)
        cout << "You Shall All Pass!" << endl;
    else if(wrongCount == t)
        cout << "None Shall Pass!" << endl;
    else{
        sort(wa.begin(), wa.end());
        int len = wa.size();
        for(int i = 0; i < len; i++){
            if(i != len - 1)
                cout << wa[i] << ' ';
            else
                cout << wa[i] << endl;
        }
    }

}

int main(){

    while(cin >> t){
        getchar();
        testCase();
    }

    return 0;
}