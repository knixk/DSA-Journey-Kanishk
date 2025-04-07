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
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        // map to store the latest index of each character
        unordered_map<char, int> map;

        int n = s.size();

        // if string is empty or has 1 char, return its length directly
        if (n <= 1)
            return n;

        // i: start index of current window (left side)
        // j: current index in iteration (right side)
        int i = 0;
        int j = 0;

        // to store the max length found
        int longestWord = 0;

        while (j < n)
        { 
            // if current character exists in map and is within the current window
            if (map.find(s[j]) != map.end() && map[s[j]] >= i)
            // basically the second check means 
            {
                // we found a duplicate inside the window
                // so, move the start of the window to the right of the previous occurrence
                i = map[s[j]] + 1;
            }

            // update the current character's index in the map
            map[s[j]] = j;

            // update the longest substring length so far
            // window size = j - i + 1
            int currentSize = j - i + 1;
            longestWord = max(currentSize, longestWord);

            // move to the next character
            j++;
        }

        return longestWord;
    }
};

/*

looping only once!
but it's kind of like some constant work

near to O(n), since every character is processed at most twice

and the space is O(n) too, due to the hashmap storing characters

*/
