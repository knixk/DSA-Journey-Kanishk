
/*
basically we're given an arr,
and a target,


basically we need to return the position where we should insert the ele


so let's try to iterate over the arr,
we check if the cur letter is less than or equal this one, 
if it is, then we increment, otherwise we need to return this idx
    


the issue is we don't know so we need to go more and more further

*/
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {

            int n = nums.size();

            for (int i = 0; i < n; i++) {
                int cur = nums[i];
                if (cur <= target)
            }
        }
    };