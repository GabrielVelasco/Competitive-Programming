#include <iostream>
#include "bits/stdc++.h"

using namespace std;

int main(){
	int tc, a, b, c, d, e;
	int count = 0;
	char piv;
	bool ch = true;
	while(true){
		cin >> tc; getchar();
		if(tc == 0) break;
		while(tc --){
			count = 0;
			ch = true;
			cin >> a; getchar(); if(a <= 127){ count ++; piv = 'A'; if(count >= 2) ch = false; }
			cin >> b; getchar(); if(b <= 127){ count ++; piv = 'B'; if(count >= 2) ch = false; }
			cin >> c; getchar(); if(c <= 127){ count ++; piv = 'C'; if(count >= 2) ch = false; }
			cin >> d; getchar(); if(d <= 127){ count ++; piv = 'D'; if(count >= 2) ch = false; }
			cin >> e; getchar(); if(e <= 127){ count ++; piv = 'E'; if(count >= 2) ch = false; }
			if(ch && count != 0)
				cout << piv << endl;
			else
				cout << "*" << endl;
		}
	}

	return 0;
}