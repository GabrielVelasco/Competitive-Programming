//#include <bits/stdc++.h>
//#include "stdc++.h" Mac OS
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

struct medals{
	string name;
	int gold, silver, bronze;

	bool operator < (medals tmp){
		if(gold != tmp.gold)	return gold > tmp.gold;
		else if(silver != tmp.silver)	return silver > tmp.silver;
		else if(bronze != tmp.bronze)	return bronze > tmp.bronze;
		else return name < tmp.name;
	}	
};

medals country[310];
map< string, medals > mymap;

void enteringDatas(){
	string comp;
	string namec;
	int cont = 1;

	for(int _ = 0; _ < 1000; _ ++){

		getline(cin, comp); // competition name
		if(comp.size() == 0) // stop condition
			break;

		while( getline(cin, namec) ){

			if(namec.size() == 0) // stop condition
				break;

			if(cont == 1) // input line 1, gold medal
				mymap[namec].gold ++;

			else if(cont == 2) // input line 2, silver medal
				mymap[namec].silver ++;

			else if(cont == 3){ // input line 3, bronze medal
				mymap[namec].bronze ++;
				cont = 1;
				break;
			}

			cont ++;
		}
	}
}

void copySortPrint(){
	int i = 0;

	for(auto x: mymap){
		country[i].name = x.first;
		country[i].gold = x.second.gold;
		country[i].silver = x.second.silver;
		country[i].bronze = x.second.bronze;
		i ++;
	}
	mymap.clear();
	sort(country, country+i);

	cout << "Quadro de Medalhas" << endl;
	for(int j = 0; j < i; j++)
		cout << country[j].name << " " << country[j].gold << " " << country[j].silver << " " << country[j].bronze << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	enteringDatas();
	copySortPrint();

	return 0;
}