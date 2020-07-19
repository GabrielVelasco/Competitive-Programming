#include "bits/stdc++.h"
#include <iostream>

using namespace std;

struct medals{
	int gold, silver, bronze;
	string name;
	bool operator < (medals piv){
		if(gold == piv.gold){
			if(silver != piv.silver)	return silver > piv.silver;
			else if(bronze != piv.bronze) return bronze > piv.bronze;	
			else return name < piv.name; // bronze == silver == gold
		}else{
			return gold > piv.gold;
		}
	}
};

medals cArray[501];

int main(){
	int n; cin >> n; getchar(); // reand N countries
	int count = 0;
	while(n--){
		cin >> cArray[count].name;
		cin >> cArray[count].gold >> cArray[count].silver >> cArray[count].bronze; getchar();
		count ++;
	}
	sort(cArray, cArray+count);
	for(int i = 0; i < count; i++){
		cout << cArray[i].name << " " << cArray[i].gold << " " << cArray[i].silver << " " << cArray[i].bronze << endl;
	}

	return 0;
}