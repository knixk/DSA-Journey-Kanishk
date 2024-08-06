#include <bits/stdc++.h>
using namespace std;

/*
given a no. n tell me how many ways there are to reach that
ladder
*/

/* what if n is 0? there are only 1 one way
if you wana reach 1, there is only 1 one way
if u wanna reach 2, u can go 1 - 1 , 2, 
if u wanna reach 3, you can go 111, 21, 12, 3
if u wanna reach 4, 1111, 22, 13, 31, 4, 121,112, 211,
*/

int countWays(int n) {

	if (n < 0) {
		return 0;
	}

	if (n == 0 or n == 1) {
		return 1;
	}

	int a, b, c, ans;

	a = countWays(n - 1);
	b = countWays(n - 2);
	c = countWays(n - 3);

	ans = a + b + c;

	return ans;

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;

	int ans = countWays(n);	
	cout << ans;

}