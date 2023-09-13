#include <bits/stdc++.h>
using namespace std;

void pairSum(vector <int> & arr, int Sum, int n) {

	unordered_set <int> s;

	for (int i = 0; i < n; i++) {
		int x = Sum - arr[i];

		if (s.find(x) != s.end()) {
			cout << x << " : " << arr[i] << "\n";
		}

		s.insert(arr[i]);
	}

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector <int> arr = {10, 5, 2, 3, -6, 9, 11, 2};
	int Sum = 4; int n = arr.size();

	pairSum(arr, Sum, n);

	return 0;	

}