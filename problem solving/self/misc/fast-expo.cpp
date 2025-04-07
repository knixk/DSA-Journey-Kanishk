#include <bits/stdc++.h>
using namespace std;

int fast_expo(int a, int n) {

	int ans = 1; 

	while (n > 0) {
		if (n & 1) {
			ans *= a;
		}

		a = a * a;
		n = n >> 1;
	}

	return ans;
}

int main() {
	int a = 2; int n = 2;
	cout << fast_expo(a, n);
	return 0;		
}	

/*
watch solution
*/