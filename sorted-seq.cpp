class Solution {
public:


	void form_subsets(vector<int> & nums, int idx, vector<int> o, vector<vector<int>> & ans, int n) {
		if (idx == n) {
			ans.push_back(o);
			return;
		}

		// not taking nums[0]
		form_subsets(nums, idx + 1, o, ans, n);


		// taking nums[0]
		o.push_back(nums[idx]);
		form_subsets(nums, idx + 1, o, ans, n);
	}

    vector<vector<int>> subsets(vector<int>& nums) {
    	int n = nums.size();
		vector<int> ans_v;
		vector<vector<int>> ans;
		form_subsets(nums, 0, ans_v, ans, n);

		return ans;       
    }
};