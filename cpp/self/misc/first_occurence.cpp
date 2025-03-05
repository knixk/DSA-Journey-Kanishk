#include <bits/stdc++.h>
using namespace std;


// return the index of first occur
int strStr(string haystack, string needle) {

	int n = haystack.length(), m = needle.length();

	for (int i = 0; i < n - m; i++) {
		int j = 0;
		while (j < m) {
			if (haystack[i] == needle[j]) {
				j++;
			}
		}

		if (j == m) {
			return i;
		}
	}

	return -1;
}	

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string h, n; cin >> h >> n;
	int ans = strStr(h, n);
	cout << ans;

	return 0;

}