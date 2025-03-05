#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> & arr, int n, int sum) {
	unordered_set <int> s;
	vector<int> tempArr;

	for (int i = 0; i < n; i++) {
		
		int x = sum - arr[i];

		if (s.find(x) != s.end()) {
			tempArr.push_back(arr[i]);
			tempArr.push_back(x);
			return tempArr;
		}

		s.insert(arr[i]);
	}

	return {};
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n; int sum; cin >> sum;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	vector<int> ansArr = pairSum(arr, n, sum);

	for (auto x : ansArr) {
		cout << x << " ";
	}

	return 0;
}