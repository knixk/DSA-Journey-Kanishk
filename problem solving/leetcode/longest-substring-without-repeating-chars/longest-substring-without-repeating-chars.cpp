// problem link: https://leetcode.com/problems/longest-substring-without-repeating-characters/


/*
don't be dependent on the instructor to solve it for u,
ull never be able to learn this wy..
*/
/*
let's try to do it with the hashmap alr?


// how can we do this?

/*
use as many loops as u want but solve it


this is good, keep up with it
*/
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char, bool> map;

            int n = s.size();
            int maxSize = 0;

            // for (int i = 0; i < n; i++) {
                
            // }
            int i = 0;
            int j = 0;

            while (i < n && j < n) {
                // NO I TRY TO SAVE, DUDE DON'T GO OUT OF BOUNDS BASICALLY
                // THAT'S WHY IT DIDN'T DO AN INFINITY LOOP
                if (!map[s[j]]) {
                    map[s[j]] = true;
                    j++;
                } else {
                    i++;
                    j = i;
                    // also we need to clear the map
                    map.clear();
                }

                // calc the size
                int longestSize = j - i; // is this correct?
                // im not sure why this gave a right answer
                /*
                so basically i kept a track of the longest in a variable,
                and when it was already there i reset the map, 
                move the j to i++ th idx,
                and i start my search again,

                until i is less than n,
                which is safe to do so..

                IT SEEMS LIKE AS THE IDX, WAS ALREADY + 1,
                CALCULATING THE DIFF DID THE TRICK, AND IT ALWAYS WORKS

                */

                maxSize = max(longestSize, maxSize);

            }

            return maxSize;

        }
    };