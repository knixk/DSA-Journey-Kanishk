// https://codeforces.com/problemset/problem/1879/F

#include <bits/stdc++.h>
using namespace std;

void lastManStanding(vector<int> health, vector<int> armor, int n) {



}

int main() {

	int t; cin >> t;

	while (t--) {

		int n; cin >> n;

		vector<int> health(n), armor(n);

		for (int i = 0; i < n; i++) {
			int temp; cin >> temp;
			health[i] = temp;
		}

		for (int i = 0; i < n; i++) {
			int temp; cin >> temp;
			armor[i] = temp;
		}

		lastManStanding(health, armor);

		// for (auto x : health) {
		// 	cout << x << " ";
		// }


	}

	return 0;
}
