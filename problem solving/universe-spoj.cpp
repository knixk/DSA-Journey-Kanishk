#include <bits/stdc++.h>
using namespace std;


/*
NOTE: basically we were asked to print whatever number is given,
otherwise stop at 42

simple as that

we use a white loop that runs forever
 */

int main() {


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


	int t;
	while (true) {
		cin >> t;
		if (t == 42) {
			break;
		}
		cout << t << endl;

	}
	
	return 0;
}


// works