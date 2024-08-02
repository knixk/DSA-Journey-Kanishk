#include <bits/stdc++.h>
using namespace std;


bool beFixed() {
	
}

bool isBeautiful(vector<int> arr) {

	int ans =__gcd(arr[0], arr[1]);
    for (int i = 2; i < arr.size(); i++)
    {
        ans = __gcd(ans, numbers[i]);
    }
}


bool genSub(vector<int> arr, int n) {

	for (int i = 0; i < n; i++) {
		vector<int> subset;
		for (int j = i; j < n; j++) {
			subset.push_back(arr[j]);
		}

		bool ans = isBeautiful(subset);

		if (!ans) {
			ans = beFixed(subset);
		}

		return ans;
	}
}

void mochaArr() {
	int n; cin >> n;
	vector<int> arr(n, -1);
	for (int i = 0; i < n - 1; i++) {
		cin >> arr[i];
	}

	bool ans = genSub(arr, n);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int t; cin >> t;
	while (t--) {
		mochaArr();
	}
}