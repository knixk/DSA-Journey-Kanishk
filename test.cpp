#include <bits/stdc++.h>
using namespace std;


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	stack<int> my_stack;
	int n; cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		my_stack.push(arr[i]);
	}
	

    while (!my_stack.empty()) {
    	cout << my_stack.top() << " ";
    	my_stack.pop();
    }

	return 0;
}