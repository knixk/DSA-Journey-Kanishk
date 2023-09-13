class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return n;
        }
        unordered_set<int> s;
        int largest = 1;

        for (int i = 0; i < n; i++) {
            s.insert(nums[i]);
        }

        for (auto x : s) {
            int cnt = 1;
            int prev = x - 1;
            int next = x + 1;

            if (s.find(prev) != s.end()) {
                continue;
            }

            while (s.find(next) != s.end()) {
                cnt++;
                next++;
            }

            largest = max(cnt, largest);
        }

        return largest;
    }
};















