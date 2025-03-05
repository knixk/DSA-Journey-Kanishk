#include <bits/stdc++.h>
using namespace std;

// k = 2
// arr: 3 4 2 5 6 7 8
// max: 3 4 5 6 7 8

// k = 3
// arr: 3 4 4 2 5 5 6 2 7 1 8
// max: 4 4 5 5 6 6 7 7 8


vector<int> maxInWindow(vector<int> nums, int k){
    
	vector <int> output;
    deque <int> dq;
    int n = nums.size();
    int l = 0, r = 0;

    while (r < n) {
    	while (!dq.empty() && dq.back() < nums[r]) {
    		dq.pop_back();
    	}

    	dq.push_back(r);  	

    	// if l is out of bounds
    	if (l > dq.front()) {
    		dq.pop_front();
    	}

    	// increase window
    	if (r + 1 >= k) {
    		output.push_back(nums[dq.front()]);
    		// dq.pop_front();
    		l++;
    	}
 
    	r++;
    }

    return output;
} 