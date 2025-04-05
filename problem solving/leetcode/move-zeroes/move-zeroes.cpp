/*
intuition,
let
say we loop over the arr build a second arr right?

push all except, 0,

make a count of it,

in the end fill it with the number of zeroes present, that's it
*/

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            
            int n = nums.size();
            int zeroes = 0;
            vector <int> ans;

            for (int i = 0; i < n; i++) {
                if (nums[i] == 0) {
                    zeroes++;
                    continue;
                }

                ans.push_back(nums[i]);
            }

            for (int i = 1; i <= zeroes; i++) {
                ans.push_back(0);
            }

            // return ans;

            for (int i = 0; i < n; i++) {
                nums[i] = ans[i];
            }
        }
    };


    /*
    basically intuition was simple,
    just push all the non zeroes,
    make a count of zeroes,
    push them in the after wards,

    copy this newmade arr to that old one

    that's it
    */