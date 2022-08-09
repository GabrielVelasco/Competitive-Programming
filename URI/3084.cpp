#include <iostream>
using namespace std;
    // TESTAR FUNCAO BOOL:
    // if(a%2 != 0 && b%2 == 0) return false; //coloca b na frente de a?

    // Ex: if(a > 10 && b < 20) return false; //coloca b na frente de a?

int main(){
    int h, m;
    while(cin >> h >> m){
        if(h && m == EOF)
            break;
        
        if(m/6 < 10 && h/30 < 10)
            cout << "0" << h/30 << ":" << "0" << m/6 << endl;
        else if(m/6 < 10) 
            cout << h/30 << ":" << "0" << m/6 << endl;
        else if(h/30 < 10)
            cout << "0" << h/30 << ":"<< m/6 << endl;
        else
            cout << h/30 << ":" << m/6 << endl;
    }

    return 0;
}