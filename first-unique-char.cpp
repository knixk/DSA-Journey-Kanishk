#include <bits/stdc++.h>

bool searchInArr(vector <char> & arr, char k) {
	for (auto x : arr) {
		if (x == k) {
			return true;
		}
	}
	
	return false;
}

int firstNonRepeating(vector <char> & arr, int n) {

	//vector <char> storage; 
	//vector <pair <char, int>> idxPair(n, make_pair(' ', -1));
	unordered_map<char, int> hashmap;

	//bool push = true; int idxPair = -1;

	for (int i = 0; i < n; i++) {
		hashmap[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {
		if (hashmap[arr[i]] == 1) {
			return i;
		}
	}

	return -1;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;
	vector <char> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << firstNonRepeating(arr, n);
		
}
