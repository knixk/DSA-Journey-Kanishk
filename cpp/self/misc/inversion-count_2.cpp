#include <bits/stdc++.h>
using namespace std;

// can you implement merge sort?
int merge(vector<int> &arr, int s, int e) {
	// compare and merge within bounds
	int mid = (e + s) / 2, j = mid + 1, i = s;

	vector<int> temp;

	int cnt = 0;

	while (i <= mid && j <= e) {

		if (arr[i] > arr[j]) {
			temp.push_back(arr[j++]);
			cnt += (mid - i + 1);
		} else {
			temp.push_back(arr[i++]);
		}
	}

	while (i <= mid) {
		temp.push_back(arr[i++]);
	}

	while (j <= e) {
		temp.push_back(arr[j++]);
	}

	int k = 0;
	for (int idx = s; idx <= e; idx++) {
		arr[idx] = temp[k++];
	}

	return cnt;
}


int inversion_count(vector<int> &arr, int s, int e) {

	if (s >= e) {
		return 0;
	}

	int mid = (s + e) / 2, j = mid + 1;

	int C1 = inversion_count(arr, s, mid);
	int C2 = inversion_count(arr, j, e);
	int CI = merge(arr, s, e);

	return C1 + C2 + CI;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector<int> arr = {0,5,2,3,1};
	int s = 0, e = arr.size() - 1;

	cout << inversion_count(arr, s, e) << endl;

	// for (auto x : arr) {
	// 	cout << x << " ";
	// }

	return 0;
}

// works

