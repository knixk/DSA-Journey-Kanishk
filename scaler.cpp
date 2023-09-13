// jump game leetcode

class Solution {
public:

	int jumpHelper(vector<int> & nums, int n, int i) {
		if (n >= i) {
			return 0;
		}

		int current = nums[i], include = INT_MAX, includeOnlyOne = INT_MAX;

		// approach: the current jump and rest recursion will handle
		// include
		if (current > 0) {
			include = jumpHelper(nums, n, i + nums[i]) + 1;
		}

		// include only 1
		if (current >= 1) {
			includeOnlyOne = jumpHelper(nums, n, i + 1) + 1;
		}

		int ans = min(include, includeOnlyOne);
		return ans;
	}

    int jump(vector<int>& nums) {
    	int n = nums.size() - 1, i = 0;
        // take maximum distance for minimum jumps
        // and some room for improvisations
    	int jumps = jumpHelper(nums, n, i);
    	return jumps;
    }
};

// maxDist: as far from land as possible
// (x0, y0) and (x1, y1) is |x0 - x1| + |y0 - y1|.


class Solution {
public:

	bool inBounds(int s, int e, int i) {
		if (i >= s && i < e) {

		}
	}

    int maxDistHelper(vector<vector<int>>& grid, vector<vector<int>>& dpArr, int n, int i, int j) {
        if (i == n) {
        	return 0;
        }

        if (dpArr[i][j] != INT_MIN) {
        	return dpArr[i][j];
        }

        int moveRight =  maxDistHelper(grid, dpArr, n, i + 1, j); 
        int moveBottom = maxDistHelper
    }

    int maxDistance(vector<vector<int>>& grid) {
    	int n = grid.size(), i = 0, j = 0;
        vector<vector<int>> dpArr( n , vector<int> (n, INT_MIN));
        maxDistHelper(grid, dpArr, n, i, j); 
    }
};