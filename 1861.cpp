#include <iostream>
#include "bits/stdc++.h"

#define ll long long
using namespace std;

map<string, pair<int, bool> > mymap;

void tCase(){
	map<string, pair<int, bool> >::iterator it;
	string name, mu;
	while(cin >> name >> mu){
		mymap[name].first ++;
		mymap[mu].second = true;
	}
	cout << "HALL OF MURDERERS\n";
	for(it = mymap.begin(); it != mymap.end(); it ++){
		if(mymap[it->first].second == false)
			cout << it->first << " " << mymap[it->first].first << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	tCase();

	return 0;
}