class Solution {
public:

	bool atWrongOrder(vector<int>& nums, int i) {

		int x = nums[i];
		// for first 
		if (i == 0) {
			return x > nums[i + 1];
		}

		// for last
		if (i == nums.size() - 1) {
			return x < nums[i - 1];
		}

		// for between
		return x > nums[i + 1] or x < nums[i - 1];
	}

    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        int largest = INT_MIN;
        int smallest = INT_MAX;

        if (n < 2) {
        	return 0;
        }

        for (int i = 0; i < n; i++) {
        	int x = nums[i];
        	if (atWrongOrder(nums, i)) {
        		largest = max(largest, x);
        		smallest = min(smallest, x);
        	}
        }

        if (smallest == INT_MAX) {
        	return 0;
        }

        // check for where to fit the smallest	
        int j = 0;

        while (nums[j] <= smallest) {
        	j++;
        }

        // check for where to fit the largest
      	int k = n - 1;
      	
      	while (nums[k] >= largest) {
      		k--;
      	}  

      	int ans = (k - j) + 1;
      	return ans;
    }
};