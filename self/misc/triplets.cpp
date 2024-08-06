#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> triplets(vector<int> & arr, int n, int sum) {

	// sort the arr
	sort(arr.begin(), arr.end());

	vector<vector<int>> tempArr;

	for (int i = 0; i < n - 2; i++) {

		int j = i + 1;
		int k = n - 1;

		while (j < k) {
			int currentSum = arr[i];
			currentSum += arr[j];
			currentSum += arr[k];

			if (currentSum == sum) {
				tempArr.push_back({arr[i], arr[j], arr[k]});
				j++;
				k--;
			} else if (currentSum > sum) {
				k--;
			} else {
				j++;
			}
		}

	}

	return tempArr;

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
	
	vector<vector<int>> ansArr = triplets(arr, n, sum);

	for (auto x : ansArr) {
		for (auto y : x) {
			cout << y << ", ";
		}

		cout << endl;
	}

	return 0;
}


// i need to write these so i don't forget these concepts again i guess in a way i can recall it