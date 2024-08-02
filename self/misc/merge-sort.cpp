#include <bits/stdc++.h>
using namespace std;

// can you implement merge sort?
void merge(vector<int> &arr, int s, int e) {
	// compare and merge within bounds
	int mid = (e + s) / 2, j = mid + 1, i = s;

	vector<int> temp;

	while (i <= mid && j <= e) {

		if (arr[i] > arr[j]) {
			temp.push_back(arr[j++]);
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

	// becz we didn't know the exact index
	int k = 0;
	for (int idx = s; idx <= e; idx++) {
		arr[idx] = temp[k++];
	}

	return;
}


void mergeSort(vector<int> &arr, int s, int e) {

	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2, j = mid + 1;

	mergeSort(arr, s, mid);
	mergeSort(arr, j, e);
	return merge(arr, s, e);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector<int> arr = {2, 3, 1, 5, 6, 2, 7, 9};
	int s = 0, e = arr.size() - 1;

	mergeSort(arr, s, e);

	for (auto x : arr) {
		cout << x << " ";
	}

	return 0;
}

// works
