#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;
	vector<int> arr(n, 0);

	// init a reverse sorted array
	for (int i = 0; i < n; i++) {
		arr[i] = n - i;
	}

	auto start_time = clock();
	sort(arr.begin(), arr.end());
	auto end_time = clock();

	cout << end_time - start_time << endl;

	return 0;
	

}

/*
i create an arr with this
syntax
arr[i] = n - i

as the i increases our val decreases right..

we're calculating how much time it takes
*/