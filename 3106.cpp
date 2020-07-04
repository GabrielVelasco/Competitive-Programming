#include <iostream>

using namespace std;

int main(){
    int n, s, ans = 0; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        ans += (s - (s % 3));
    }
    cout << ans << endl;

    return 0;
}