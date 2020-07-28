#include <iostream>
#include <stdlib.h>
#include <string.h>

#define ll long long

using namespace std;

/*

        Remove a character from a string:
    string a = "test";
    a.erase( a.begin() + 2); // rm char from pos 2.
    a == tet

        Find character inside a string and return its position
    a.find('s') : return -1 if didn't find char 's'
    in this case will return '2'.

*/ 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    char digit;
    string number;
    while(true){
        cin >> digit >> number;
        if(digit == '0' && !number.compare("0"))
            break;

        // Remove character digit from string number.
        while(true){
            int pos = number.find(digit);
            if(pos == -1)
                break;
            else{
                number.erase( number.begin() + pos );
            }
        }

        for(int i = 0; i < number.size(); i++){
            if(number[i] == '0'){
                number.erase(number.begin() + i);
                i --;
            }else{
                break;
            }
        }

        if(number == "")
            cout << 0 << endl;
        else
            cout << number << endl;
    }

    return 0;
}