#include <bits/stdc++.h>
using namespace std;

void permutations(int n, int j, string s) {

	// base case

	if (j == n - 1) {
		cout << s << endl;
		return;
	}

	// for (int i = )

	// recursive case 

	for (int i = j; i < n; i++) {

		char temp;

		temp = s[0];
		s[0] = s[i];
		s[i] = temp;

		permutations(n, j + 1, s);

		s[i] = s[0];
		s[0] = temp;

	}

	return;

}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string s; cin >> s;
	int n = s.size(), j = 0;

	permutations(n, j, s);

	return 0;
	
}
