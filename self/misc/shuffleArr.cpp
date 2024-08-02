class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int midPoint = n, startPoint = 0;
        vector<int> ansArr;

        while (startPoint < midPoint && midPoint < (2 * n)) {
        	int x = nums[startPoint], y = nums[midPoint];
        	ansArr.push_back(x);
        	ansArr.push_back(y);
        	startPoint++;	
        	midPoint++;
        }

        return ansArr;
    }
};

// Get strongest

class Solution {
public:

	// bool strongestCompare(int i, int j, int m) {
	// 	int x = abs(i - m), y = abs(j - m);
	// 	if (x == y) {
	// 		return i < j;
	// 	} else {
	// 		return x < y;
	// 	}
	// }

    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int m = arr[(n - 1) / 2];
        vector<int> ansArr;
        sort(arr.begin(), arr.end(), [](int i, int j, int m) {
        	int x = abs(i - m), y = abs(j - m);
			if (x == y) {
				return i < j;
			} else {
				return x < y;
			}
        }); 
        for (int i = 0; i < k; i++) {
        	ansArr.push_back(arr[i]);
        }
        return ansArr;
     }
};