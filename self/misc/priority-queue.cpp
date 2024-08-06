#include <bits/stdc++.h>
using namespace std;

class Compare {
	public:
		bool operator()(int a, int b) {
			// for ascending a > b, 
		   // for descending a < b
			return a > b;
		}
};

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif
z
	int n; cin >> n;
	vector<int> arr(n, 0);

	priority_queue<int, vector<int>, Compare> heap;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int x : arr) {
		heap.push(x);
		// cout << x << " ";
	}

	while (!heap.empty()) {
		cout << heap.top() << endl;
		heap.pop();
	}
	
	return 0;
}