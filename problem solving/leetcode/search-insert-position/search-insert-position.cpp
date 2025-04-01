
/*
basically we're given an arr,
and a target,


basically we need to return the position where we should insert the ele


so let's try to iterate over the arr,
we check if the cur letter is less than or equal this one, 
if it is, then we increment, otherwise we need to return this idx
    


the issue is we don't know so we need to go more and more further

*/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        // Get the size of the array
        int n = nums.size();

        // Two pointers for binary search
        int left = 0;
        int right = n - 1;

        /*
        We use binary search because the array is sorted.
        Instead of checking every element (O(n)), binary search runs in O(log n).
        */

        while (left <= right) // We continue until left crosses right
        {
            int mid = left + (right - left) / 2; // Calculate mid to avoid overflow

            if (nums[mid] == target)
            {
                return mid; // We found the target at index 'mid'
            }
            else if (nums[mid] < target)
            {
                // Target is greater, so it must be in the right half
                left = mid + 1;
            }
            else
            {
                // Target is smaller, so it must be in the left half
                right = mid - 1;
            }
        }

        /*
        If we reach here, it means the target was not found.
        The 'left' pointer now represents the correct insertion index.
        */

        return left;
    }
};

// Driver code to test the function
int main()
{
    Solution solution;
    vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    int result = solution.searchInsert(nums, target);
    cout << "Insert position: " << result << endl;

    return 0;
}
