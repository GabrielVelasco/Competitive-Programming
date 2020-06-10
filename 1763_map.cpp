#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){
	string in;
	map<string, string> mymap;
		mymap["brasil"] = "Feliz Natal!";
		mymap["alemanha"] = "Frohliche Weihnachten!";
		mymap["austria"] = "Frohe Weihnacht!";
		mymap["coreia"] = "Chuk Sung Tan!";
		mymap["espanha"] = "Feliz Navidad!";
		mymap["grecia"] = "Kala Christougena!";
		mymap["estados-unidos"] = "Merry Christmas!";
		mymap["inglaterra"] = "Merry Christmas!";
		mymap["australia"] = "Merry Christmas!";
		mymap["portugal"] = "Feliz Natal!";
		mymap["suecia"] = "God Jul!";
		mymap["turquia"] = "Mutlu Noeller";
		mymap["argentina"] = "Feliz Navidad!";
		mymap["chile"] = "Feliz Navidad!";
		mymap["mexico"] = "Feliz Navidad!";
		mymap["antardida"] = "Merry Christmas!";
		mymap["canada"] = "Merry Christmas!";
		mymap["irlanda"] = "Nollaig Shona Dhuit!";
		mymap["belgica"] = "Zalig Kerstfeest!";
		mymap["italia"] = "Buon Natale!";
		mymap["libia"] = "Buon Natale!";
		mymap["siria"] = "Milad Mubarak!";
		mymap["marrocos"] = "Milad Mubarak!";
		mymap["japao"] = "Merii Kurisumasu!";
	while(cin >> in){
		if(mymap[in] != ""){
			cout << mymap[in] << endl;
		}else{
			cout << "--- NOT FOUND ---" << endl;
		}
	}

	return 0;
}