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

		/*
		since the reverse is n't let's try to make some swaps and the n is not 0
		to reverse a string:
		   reverse(str.begin(), str.end());
		 */
		

	    // Find the smallest character
	    char smallestChar = *min_element(str.begin(), str.end());

	    

		// find the smallest put in the end
	    // let's try to sw
	    for ()


		// so reverse is good





		// if not... try to make some swaps





	}


	return 0;
}