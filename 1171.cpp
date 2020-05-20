#include <iostream>
using namespace std;

int main(){
	int freq[2003];
	int x, n; cin >>  n;
	for(int i = 0; i < 2003; i++)
		freq[i] = 0;

	for(int i = 0; i < n; i++){
		cin >> x; 
		freq[x] ++;
	}

	for(int i = 0; i < 2003; i++){
		if(freq[i] > 0)
			cout << i << " aparece " << freq[i] << " vez(es)" << endl;
	}	

	return 0;
}