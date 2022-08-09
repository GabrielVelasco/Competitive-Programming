#include <iostream>
#include <string>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    size_t found = s.find("1111111");
    if((s.find("1111111") != string::npos) or (s.find("0000000") != string::npos)){
        cout << "YES\n"; // found 1's sequence
    }else{
        cout << "NO\n"; // didn't found 1's sequence
    }

    return 0;
}