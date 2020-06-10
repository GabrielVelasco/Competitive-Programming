#include <iostream>
#include <ctype.h>
#include "bits/stdc++.h"
#include <unordered_map>

#define ll long long
using namespace std;

unordered_map<char, char> map1, map2;
int c, n;

void tCase(){
	string str1, str2; 
	getline(cin, str1);
	getline(cin, str2);
	int i = 0;
	while(c--){
		map1[ str1[i] ] = str2[i];
		map2[ str2[i] ] = str1[i];
		i++;
	}
	while(n--){
		string text;
		getline(cin, text);
		int len = text.size();
		for(int i = 0; i < len; i++){
			if(map1[ (char)toupper(text[i]) ] != 0){ // se existir
				if( isupper(text[i]) ){ // se letra maiuscula, printa maiuscula
					cout << map1[ text[i] ];
				}else{
					cout << (char)tolower( map1[ (char)toupper(text[i]) ] );
				}
			}else if(map2[ (char)toupper(text[i]) ] != 0){
				if( isupper(text[i]) ){
					cout << map2[ text[i] ];
				}else{
					cout << (char)tolower( map2[ (char)toupper(text[i]) ] );
				}
			}else{
				cout << text[i];
			}
		}
		cout << endl;
	}
	cout << endl;
	map2.clear();
	map1.clear();
}

int main(){
	while(cin >> c){
		cin >> n;
		getchar();
		tCase();
	}

	return 0;
}