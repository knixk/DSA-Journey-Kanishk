#include <bits/stdc++.h>
using namespace std;

bool checkSubsets(string s1, string s2) {

	int i = s1.length() - 1;
	int j = s2.length() - 1;

	while (i >= 0 and i >= 0) {
		if (s1[i] == s2[j]) {
			i--;
			j--;
		} else {
			i--;
		}
	}

	if (j == -1) {
		return true;
	} else {
		return false;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string s1, s2;
	cin >> s1 >> s2;

	if (checkSubsets(s1, s2)) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;

}