#include <bits/stdc++.h>
using namespace std;

void genSubsequence(int i, vector<int> & arr, vector<int> ans) {
	int n = arr.size();
	// base case
	if (i >= n) {
		// also print
		for (auto x : arr) {
			cout << x << " ";
		}

		cout << "\n";
		return;
	}

	// recursive case

	// take
	ans.push_back(arr[i]);
	genSubsequence(i, arr, ans);
	ans.pop_back();


	// don't take
	genSubsequence(i + 1, arr, ans);

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n, idx = 0; cin >> n;
	vector<int> arr(n), ans;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	genSubsequence(idx, arr, ans);

}