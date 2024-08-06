#include<bits/stdc++.h>
using namespace std;

int cntSubarrays(vector<int> arr,int k){
    //complete this method
    int start = 0;
    int n = arr.size();
    int cs = 0;
    int ans = 0;

    for (int i = 0; i < n; i++) {
    	// if we found a way
    	if (cs == k) {
    		cout << start << " " << i << endl;
    		ans++;
    	}
    	cs += arr[i];
    }

	while (start < n) {
		if (cs == k) {
    		cout << start << " " << n - 1 << endl;
    		ans++;
    	}
    	
    	if (cs < 0) {
    		if (arr[start] < 0) {
				cs += arr[start];
			} else {
				cs -= arr[start];
			}	
    	} 

    	else (cs > 0) {
    		if (arr[start] < 0) {
				cs += arr[start];
			} else {
				cs -= arr[start];
			}	
    	}

		start++;
	}

    return ans;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector<int> arr = {10, 2, -2, -20, 10};
	int k = -10;
	cout << cntSubarrays(arr, k);
	return 0;
}