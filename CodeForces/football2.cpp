#include <iostream>
#include <string>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    // check if there is a sequence of 7 iquals charc
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int counter = 1;
    cin >> s;

    // suppose that i have to find a sequence of '3' (k = 3) equal charac
    // I would have to check from a[0] to a[n-3] ==> interval i = [0, n-3]
    // once I'm at a[n-3] there's only 3 elements to the end of a (including a[n-3]).

    // a[ x, ...   x,   x,   x,   x,   x ]  == size of N
    //   n-n ...  n-k  n-4  n-3  n-2  n-1   == calculate index based on the size of a (N)

    // 001001

    int k = 7, n = s.length();

    for(int i = 0; i <= (n - k); i++){
        counter = 1;
        for(int j = i+1; j < i+k ; j++){
            if(s[i] == s[j]){
                counter ++; // found 2 consecutive equals charac.
            }else{
                i = j-1; // already checked from s[0, j-1]
                break;
            }
        }

        if(counter >= k){
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}