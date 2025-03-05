#include <bits/stdc++.h>
using namespace std;

// return the index of first occ

int firstOccur(vector<int> arr, int n, int key) {

	if (n == 0) {
		return -1;
	}

	if (arr[0] == key) {
		return 0;
	}

	int idx = firstOccur(arr + 1, n - 1, key);

	if (idx != -1) {
		return idx + 1;
	}

	return -1;

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n, key; cin >> n >> key;
	vector<int> arr(n, -1);

	int arr2[] = 

	for (int i = 0; i < n; i++) {

		int temp; cin >> temp;
		arr[i] = temp;		

	}

	/*
	for (auto x : arr) {
		// cout << x << " ";
	}
	*/


	int ans = firstOccur(arr, n, key);

	if (ans == -1) {
		cout << "Sorry, could not be found..";
	}
}