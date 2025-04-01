
/*
A better approach with two pointers
*/

/*
so basically we had a left pointer called start,
right pointer called end,

if calc our height and width,
then the area of our rectangle we can form,

then we maintain a max so far

now most important part,

if the height of left is more than right,
we need to decrement right counter,


otherwise we need to increment left counter,

if the height is same,
doesn't matter inc or dec either.
*/
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n = height.size();

            int maxSoFar = INT_MIN;
            int start = 0;
            int end = n - 1;


            /*
            instead of usign two redundant for loops,
            let's try to use i and j ponters as it will make our work more efficient alr?

            it seems, like start i and j and start and end,
            then decrement the last when height seems to be smaller,
            increment first when height seems smaller

            
            */

            while (start < end) { // start and end can't be same

                int cur_height = min(height[start], height[end]);
                int width = end - start;

                int area = cur_height * width;

                maxSoFar = max(area, maxSoFar);

                /*
                now we need to converge this search, otherwise we won't get our ans
                */

                if (height[start] > height[end]) {
                    // decrement end
                    end--;
                } else {
                    // increment start
                    // doesn't matter if both are eq, we can do any right?
                    start++;

                    /*
                    what happens if it's less or equal? doesnt matter decrement or increase either, as it will naturally converge based
                    on the while loop conditions
                    */

                }

            }

            return maxSoFar;


        }

    };

    /* */