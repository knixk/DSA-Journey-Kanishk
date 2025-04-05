
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
                // int zeroes = 0;

                /*
                instead of using extra space,
                can u just simply make use of two vars and solve this? YESSS
                */

                int i = 0;
                int j = 0;

                while (i < n) {
                    // while n doesn't goes out of bounds
                    if (nums[i] == 0) {
                        i++;
                    } else {
                        // nums[i] is defs not zero
                        // we change the val at j when we find a good one, and we simply increment i
                        nums[j] = nums[i];
                        j++;
                        i++;
                    }
                }

                // int howManyZeroesLeft = n - 1 - j;

                for (int i = j; i < n; i++) { // this has some issues, but i managed to fix it
                    // basically i just need to loop through the rest of the arr, 
                    // and j has been incremente
                    nums[i] = 0;
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