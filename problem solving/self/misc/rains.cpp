class Solution {
public:
    int trap(vector<int>& height) {
        int ans = 0;
        int n = height.size();
        vector<int> leftMax (n, 0);
        vector<int> rightMax (n, 0);
        int maxSoFar = 0;

        // max arr: left to right
        for (int i = 0; i < n; i++) {
            int current = height[i];
            maxSoFar = max(current, maxSoFar);
            leftMax[i] = maxSoFar;
        }

        maxSoFar = 0;

        // max arr: right to left   
        for (int i = n - 1; i >= 0; i--) {
            int current = height[i];
            maxSoFar = max(current, maxSoFar);
            rightMax[i] = maxSoFar;
        }

        // calculating at current
        for (int i = 0; i < n; i++) {
            int minOfMax = min(leftMax[i], rightMax[i]);
            int current = minOfMax - height[i];
            ans += current;
        }

        return ans;
    }
};


