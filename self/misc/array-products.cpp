#include <bits/stdc++.h>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    vector<int> output(n,1);

    //update the output array and return
	for (int i = 0; i < n; i++) {
	    int multiplyFactor = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) {
				continue;
			}

			multiplyFactor *= arr[j];
		}

		output[i] = multiplyFactor;
	}    

	return output;
}	