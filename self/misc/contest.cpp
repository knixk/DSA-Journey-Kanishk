#include <bits/stdc++.h>
using namespace std;

int maxDuration(vector<int> & tools, int a, int b, int n) {

	int time = 0;

	for (int i = 0; i < n; i++) {

		if (b == 0) {
			break;
		}

		while (b > 1) {
			b--;
			time++;
		}

		b = min(b + tools[i], a);

	}

	// if loop over but still timer left
	while (b > 0) {
		b--;
		time++;
	}

	return time;
}

int main() {
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	// code here
	
    int t; cin >> t;
    // vector<int> tools;

    while (t--) {
    	int a, b, n;

    	cin >> a >> b >> n;

    	vector<int> tools(n, 0);

    	for (int i = 0; i < n; i++) {

    		int temp; cin >> temp;
    		tools[i] = temp;

    	}

    	int ans = maxDuration(tools, a, b, n);

    	cout << ans << endl;
    }

	return 0;
}