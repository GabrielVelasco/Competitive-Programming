#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int ch = 0;
	string in;
	vector<pair<string, string>> myvec;
		myvec.push_back(pair<string, string>()); myvec[0].first = "brasil"; myvec[0].second = "Feliz Natal!";
		myvec.push_back(pair<string, string>()); myvec[1].first = "alemanha"; myvec[1].second = "Frohliche Weihnachten!";
		myvec.push_back(pair<string, string>()); myvec[2].first = "austria"; myvec[2].second = "Frohe Weihnacht!";
		myvec.push_back(pair<string, string>()); myvec[3].first = "coreia"; myvec[3].second = "Chuk Sung Tan!";
		myvec.push_back(pair<string, string>()); myvec[4].first = "espanha"; myvec[4].second = "Feliz Navidad!";
		myvec.push_back(pair<string, string>()); myvec[5].first = "grecia"; myvec[5].second = "Kala Christougena!";
		myvec.push_back(pair<string, string>()); myvec[6].first = "estados-unidos"; myvec[6].second = "Merry Christmas!";
		myvec.push_back(pair<string, string>()); myvec[7].first = "inglaterra"; myvec[7].second = "Merry Christmas!";
		myvec.push_back(pair<string, string>()); myvec[8].first = "australia"; myvec[8].second = "Merry Christmas!";
		myvec.push_back(pair<string, string>()); myvec[9].first = "portugal"; myvec[9].second = "Feliz Natal!";
		myvec.push_back(pair<string, string>()); myvec[10].first = "suecia"; myvec[10].second = "God Jul!";
		myvec.push_back(pair<string, string>()); myvec[11].first = "turquia"; myvec[11].second = "Mutlu Noeller";
		myvec.push_back(pair<string, string>()); myvec[12].first = "argentina"; myvec[12].second = "Feliz Navidad!";
		myvec.push_back(pair<string, string>()); myvec[13].first = "chile"; myvec[13].second = "Feliz Navidad!";
		myvec.push_back(pair<string, string>()); myvec[14].first = "mexico"; myvec[14].second = "Feliz Navidad!";
		myvec.push_back(pair<string, string>()); myvec[15].first = "antardida"; myvec[15].second = "Merry Christmas!";
		myvec.push_back(pair<string, string>()); myvec[16].first = "canada"; myvec[16].second = "Merry Christmas!";
		myvec.push_back(pair<string, string>()); myvec[17].first = "irlanda"; myvec[17].second = "Nollaig Shona Dhuit!";
		myvec.push_back(pair<string, string>()); myvec[18].first = "belgica"; myvec[18].second = "Zalig Kerstfeest!";
		myvec.push_back(pair<string, string>()); myvec[19].first = "italia"; myvec[19].second = "Buon Natale!";
		myvec.push_back(pair<string, string>()); myvec[20].first = "libia"; myvec[20].second = "Buon Natale!";
		myvec.push_back(pair<string, string>()); myvec[21].first = "siria"; myvec[21].second = "Milad Mubarak!";
		myvec.push_back(pair<string, string>()); myvec[22].first = "marrocos"; myvec[22].second = "Milad Mubarak!";
		myvec.push_back(pair<string, string>()); myvec[23].first = "japao"; myvec[23].second = "Merii Kurisumasu!";

	while(cin >> in){
		ch = 0;
		for(auto x: myvec){
			if(x.first == in){
				cout << x.second << endl;
				ch = 1;
			}
		}
		
		if(ch == 0)
			cout << "--- NOT FOUND ---" << endl;
	}

	return 0;
}