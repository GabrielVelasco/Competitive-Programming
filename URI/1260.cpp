#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
	map<string, float> trees;
	int t, cont, tmp = 1; cin >> t;
	cin.ignore();
	cin.ignore();
	string temp;
	while(t--){
		trees.clear();
		if(tmp != 1)
			cout << endl;
		map<string, float>::iterator it;
		cont = 0;
		while(getline(cin, temp)){
			if(temp.size() == 0)
				break;
			cont ++;
			trees[temp] ++; //se não existir, cria um trees[temp], second = +1;
		}

		//cout << endl;
		for(it = trees.begin(); it != trees.end(); it ++){
			string key = it->first;
			int val = it->second;
			float val2 = (100.00/(float)cont)*val;
			printf("%s %.4f\n", key.c_str(), val2);
		}

		tmp ++;
	}
 
	return 0;
}