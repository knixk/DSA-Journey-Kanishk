

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        int n = nums.size();

        int first = -1;
        int second = -1;

        vector<int> ans;

        for (int i = 0; i < n; i++) 
        {
            if (nums[i] == target)
            {
                if (first == -1)
                {
                    first = i;
                }
                else
                {
                    second = i;
                }
            }
        }

        // ans[0] = first;
        // ans[1] = second;
        ans.push_back(first);
        ans.push_back(second);

        return ans;
    }
};