#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>

using namespace std;

		//    num        E  | D
unordered_map<int, pair<int, int> > mymap;

int n, num, pairCount;
char foot;

void testCase(){
	while(n--){
		cin >> num >> foot;
		if(foot == 'E')
			mymap[num].first ++; // contou mais um pe E
		else
			mymap[num].second ++; // contou mais um pe D

		if(mymap[num].first >= 1 && mymap[num].second >= 1){
			pairCount ++;
			mymap[num].first --;
			mymap[num].second --; // usou um E e um D para formar um par, logo eles nao contam mais
		}
	}
	cout << pairCount << endl;

}


int main(){
	while(cin >> n){
		testCase();
		mymap.clear();
		pairCount = 0;
	}
	
	return 0;
}