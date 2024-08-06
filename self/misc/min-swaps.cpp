class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    int ans = 0;
		 
	    vector <pair<int, int>> pairArr;
	    vector<bool> visited (n, false);	

	    for (int i = 0; i < n; i++) {
	    	auto pair_of_int = make_pair(nums[i], i);
	    	pairArr.push_back(pair_of_int);
	    }

	    sort(pairArr.begin(), pairArr.end());

	    for (int i = 0; i < n; i++) {

	    	int idx = i;
	    	int cycle = 0;
	    	int nextIdx = pairArr[idx].second;

	    	// return if pair matches old or visited
	    	if (visited[i] or nextIdx == i) {
	    		continue;
	    	}


	    	// find cycle
	    	while (!visited[idx]) {
		    	// visit the item
	    		cycle++;
		    	visited[idx] = true;
		    	idx = pairArr[idx].second;
		    	// idx = nextNode;
	    	}

	    	ans += (cycle - 1);
	    }

	    return ans;
	}
};