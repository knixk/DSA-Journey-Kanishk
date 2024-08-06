#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
	return a + b < b + a;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string arr[] = {"a", "ab", "aba"};
	int n = 3;

	sort(arr, arr + n, compare);

	for (auto x : arr) {
		cout << x << " ";
	}
	

} 