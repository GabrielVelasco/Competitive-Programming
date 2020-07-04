#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> nums;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, len;
	while(cin >> n){
		int count = 0;
		string tmp;
		for(int i = 1; i <= n; i++){
			cin >> tmp;
			nums.push_back(tmp);
		}
		len = tmp.size();
		sort(nums.begin(), nums.end());
		for(int i = 1; i < n; i++){
			for(int j = 0; j < len; j++){
				if(nums[i][j] == nums[i-1][j])
					count ++;
				else
					break;
			}
		}

		cout << count << endl;
		nums.clear();
	}

	return 0;
}