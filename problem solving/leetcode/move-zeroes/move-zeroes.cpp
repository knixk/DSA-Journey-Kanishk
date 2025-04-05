
/*
MISTAKES I MADE WHILE LEARNING TO CODE PREVIOUSLY,
DIDN'T SOLVE MANY PROBLEMS,
YES I DID,
BUT I TOOK FOREVER TO JUST SOLVE A SIMPLE PROBLEM,
THAT WAS VERY BAD DUDE!!

YOU MUST QUICKLY SOLVE PROBLEMS INORDER TO BECOME EFFICIENT
*/

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

    another way to solve this would be,
    prolly 

    one way, is the arr sorted? if yes then only it will work
    and reverse this
        so 
     2 1 0 0
     0 0 1 2
     2 1 0 0  // now we must reverse the non zero part
     1 2 0 0

     this should be our ans right?
    */