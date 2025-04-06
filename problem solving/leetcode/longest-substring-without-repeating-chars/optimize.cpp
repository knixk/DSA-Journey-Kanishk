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

so far what i can see,
that in order to reduce the time for this problem,
we're gonna ummm,
use a map again,, but this time..
let's say we enocunter a dup again,

we'll see oh what's the index of this char since it's already prsent?
we'll move our to one more to this alr?

let's see

*/
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            // char and it's respective index we'll store
            unordered_map<char, int> map;

            int n = s.size();

            // if n is less than 1, return the length already
            if (n <= 1) return n;

            int i = 0;
            int j = 0;

            int longestWord = 0;


            while (i < n && j < n) {
                if (!map[s[j]]) {
                    map[s[j]] = j;
                    j++;
                } else {
                    // it means we found it, basically a duplicat
                    // make the i to one more than the character at j,
                    // and 
                    i = map[s[j]] + 1; // make i one more than the last idex of it
                    map[s[j]] = j;
                    // do we need to increment the j counter?

                    /*
                    we don't clear our map,
                    and it seems like neither we inc our j counter.. so what to do??    
                    */

                }


                int currentSize = j - i; // why this? this is correct btw

                // i nede to calculate my length of string so far...



            }


            

        }
    };

    /*
    
    looping only once!
    but it's kind of like some constant work

    near to n log n,

    and the space is n,


    */