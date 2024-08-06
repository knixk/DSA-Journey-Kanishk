#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n = 10;

	deque <int> dq(n);

	for (int i = 0; i < n; i++) {
		dq[i] = i * i;
	}

	dq.push_front(11);
	dq.pop_back();
	dq.push_back(n);

	cout << dq.size() << " : size \n";

	for (auto x : dq) {
		cout << x << " ";
	} 

	return 0;
	

}