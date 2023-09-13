#include <bits/stdc++.h>
using namespace std;

void permutations(int i, int n, string s, string output) {


	// base case

	if (i == n) {
		cout << output;
	}

	// recursive case 

	for (int start = i; start < n; start++) {

		s[0] = temp;
		s[i] = s[0];
		s[0] = temp;
		
		permutations(i, n, s, start);

	}

}


int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string s, output; cin >> s;
	int i = 0, n = s.size();

	permutations(i, n, s, output);

	return 0;
	
}

// no matter how good friends we be 

/* 

we should never forget we are just online friends. 
ever. We are jsut online friends. No matter how good friends we be.

*/