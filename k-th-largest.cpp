#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y) {
    if (x > y)
        return true;
    else
        return false;
}

// Function to print elements of priority_queue
void showpq(priority_queue<int, vector<int>,
                           greater<int> >
                pq)
{
    priority_queue<int,
                   vector<int>,
                   greater<int> >
        g;
    g = pq;
  
    // While priority_queue is not empty
    while (!g.empty()) {
  
        // Print the top element
        cout << g.top() << ' ';
  
        // Pop the top element
        g.pop();
    }
}

int findKthLargest2(vector<int> nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int num : nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    return pq.top();
}

int findKthLargest(vector<int> & nums, int n, int k) {

	// if (k > n) {
	// 	return -1;
	// }

	unordered_set <int> s;
	vector <int> sorted_arr;

		// when found
		if (s.find(nums[i]) != s.end()) {
			continue;
		// not found,
		} else {
			int e = nums[i];
			s.insert(e);
			sorted_arr.push_back(e);
		}
	}

	sort(sorted_arr.begin(), sorted_arr.end(), cmp);
	for (int x : sorted_arr) {
		cout << x << " ";
	}

	cout << "\n";
	return sorted_arr[k - 1];
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif
   
	int n; cin >> n; int k; cin >> k;

	vector <int> arr (n, 0);  

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	} 

	// for (int i = 0; i < n; i++) {
	// 	cout << arr[i] << " ";
	// }

	cout << findKthLargest2(arr, k);
	return 0;
}

// 3 2 3 1 2 4 5 5 6 11