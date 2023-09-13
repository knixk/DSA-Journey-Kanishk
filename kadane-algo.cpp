#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> & arr, int n) {
	int ms = 0, cs = 0;
	for (int i = 0; i < n; i++) {
		cs = cs + arr[i];
		if (cs + arr[i] < 0) {
			cs = 0;
		}
		ms = max(cs, ms);
	}
	return ms;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cout << kadane(arr, n);
	return 0;
}