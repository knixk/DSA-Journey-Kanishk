#include <bits/stdc++.h>
using namespace std;

// Custom comparator for lexicographical order
bool lexicographicCompare(const string &a, const string &b) {
    return a < b;  // Uses the default lexicographical comparison
}

int main() {

	int t;

	while (t--) {
		int n; int k;
		cin >> n; cin >> k;
		string word;
		cin >> word;

		if (n == 1) {
			cout << "no" << endl;
			continue;
		}

		string rev = "";

		// else reverse and check if it is
		for (int i = n - 1; i >= 0; i--) {
			rev += word[i];
		}

		if (lexicographicCompare(word, rev)) {
			// yes it is smaller
			cout << "yes" << endl;
			continue;
		}

		// let's try to make some swaps

		char smallestChar = a;

		for (int i = 0; i < n; i++) {
			char current = word[i];
		}





		// if not... try to make some swaps





	}


	return 0;
}