#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int A, B;
    do{
        cin >> A >> B;
    }while( (A < 1 || A > 13) || (B < 1 || B > 13) );
    if(A == B)
        cout << A << endl;
    else if(A > B)
        cout << A << endl;
    else
        cout << B << endl;

    return 0;
}