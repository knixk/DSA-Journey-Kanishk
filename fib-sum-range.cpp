#include <bits/stdc++.h>
#define pb push_back
#define lb lower_bound
using namespace std;

int fib_sum_range(int s, int e) {

	vector <int> fibArr;

	int n = 2;
	int ans = 0;

	fibArr.pb(0);
	fibArr.pb(1);

	while (fibArr[n - 1] < e) {	

		int last_one = fibArr[n - 1]; 
		int last_two = fibArr[n - 2];
		int next = last_one + last_two;

		fibArr.pb(next);
		n++;
	}

	int startIdx = -1;
	int endIdx = n - 1;

	for (int i = 0; i < n; i++) {
		if (fibArr[i] == s) {
			startIdx = i;
		}
	}

	if (startIdx == -1 or fibArr[endIdx] != e) {
		return -1;
	}

	for (int i = startIdx; i <= endIdx; i++) {
		ans += fibArr[i];
	}

	return ans;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int s, e;
	cin >> s; 
	cin >> e;

	int ans = fib_sum_range(s, e);

	cout << ans;

	return 0;	
}