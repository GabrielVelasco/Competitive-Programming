//https://neps.academy/problem/283
#include <iostream>
#include "bits/stdc++.h"

#define ll long long
using namespace std;

map<string, string> mapdici;

void cTest(){
	int m, n; cin >> m >> n; getchar();
	while(m--){
		string jap, port;
		cin >> jap; getchar();
		getline(cin, port);
		mapdici[jap] = port;
	}
	while(n--){
		string lyrics, tmp; 
		getline(cin, lyrics);
		istringstream token (lyrics); 	// Divides lyrics into tokens separated by space
		while(token >> tmp){ 	// copies the content (a string) which token is pointing to string tmp
			if(mapdici[tmp] != ""){ // if mapdici[tmp] do exists, then there will be a translation for tmp
				cout << mapdici[tmp] << " "; // print its translation
			}else{ 	// if mapdici[tmp] doesn't exists, then its value will be ( "" ) (empity string)
				cout << tmp << " "; // so there is no translation, print the entry string
			}
		}
		cout << endl;
	}
	cout << endl;
	mapdici.clear();
}

int main(){
	int t; cin >> t; getchar();

	while(t--){
		cTest();
	}

	return 0;
}