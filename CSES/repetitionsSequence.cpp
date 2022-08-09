#include <iostream>
#include <string>
// #include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    // (s.length() - i) == (N - i) == how many char from s[i] ... s[n-1]

    string s;
    cin >> s;
    int c = 1, ans = 1, j;
    for(int i = 0; i < s.length(); i++){
        c = 1;
        for(j = i+1; j < s.length(); j++){
            if(s[i] == s[j]){
                c++;
            }else{
                break;
            }
        }
        ans = max(ans, c);

        if( ans >= (s.length() - j) ){
            // check if ans is bigger than the rest of the String s, i.e: s[j] ... s[n-1]
            // if so, already have the best ans.
            break;
        }else{
            i = j-1; // salvador dessa porra
        }
    }
    cout << ans << endl;

    return 0;
}
