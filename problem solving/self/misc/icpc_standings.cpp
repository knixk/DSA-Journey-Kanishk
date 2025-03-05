#include <bits/stdc++.h>
using namespace std;

// custom compare

bool compare(pair<string, int> a, pair<string, int> b) {
	// in non-decreasing order
	return a.second < b.second;
}

int badness(vector<pair<string,int>> teams){
    //Complete this function to return the min badness
	int n = teams.size();
	sort(teams.begin(), teams.end(), compare);
	int sum_of_diff = 0;

	for (int i = 0; i < n; i++) {
		int diff = abs(i + 1 - teams[i].second);
		sum_of_diff += diff;
	}

	return sum_of_diff;
}

void takeInput(int n, vector<pair<string,int>> & str_int_pair_vec) {
	while (n--) {
		string key; int val;
		cin >> key >> val;
		pair<string, int> my_pair = {key, val};
		str_int_pair_vec.push_back(my_pair);
	}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;
	vector<pair<string,int>> str_int_pair_vec;
	takeInput(n, str_int_pair_vec);

	int ans = badness(str_int_pair_vec);
	cout << ans;

	return 0;
}