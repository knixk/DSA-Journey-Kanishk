// #include<vector>
// #include<utility>
// #include<climits>
// #include<>
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    int cs = 0;
    int ms = 0;
    
    for(int i=0;i<n;i++){
        cs += arr[i];
        ms = max(ms,cs);
        if(cs<0){
            cs = 0;
        }
    }
    return ms;
}

/* 
int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    
    pair <int, int> idxPair;

    int leftMax = INT_MIN;
    int rightMax = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
    	currentSum += arr[i];
    	if (currentSum > leftMax) {
    		leftMax = currentSum;
			idxPair.first = i;     		
    	}
    }

    currentSum = 0;

    for (int i = n - 1; i >= 0; i--) {
    	currentSum += arr[i];
    	if (currentSum > rightMax) {
    		rightMax = currentSum;
			idxPair.second = i;     		
    	}
    }
    
    int left = idxPair.first;
    int right = idxPair.second; 

    currentSum = 0;

    for (int i = left; i <= right; i++) {
    	currentSum += arr[i];
    }

    return currentSum;
}

*/