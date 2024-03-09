


class Solution {
public:

    void generatePermutes(vector<int>& nums, int j, int n, vector<vector<int>> & ans) {

        // base case
        if (j >= n) {
            ans.push_back(nums);
            return;
        }

        for (int i = j; i < n; i++) {
            int swapInt;

            swapInt = nums[j];
            nums[j] = nums[i];
            nums[i] = swapInt;

            // recursive call
            generatePermutes(nums, j + 1, n, ans);

            // backtracking
            swapInt = nums[j];
            nums[j] = nums[i];
            nums[i] = swapInt;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size(), j = 0;
        vector<vector<int>> ans;
        generatePermutes(nums, j, n, ans);
        return ans;
    }
};