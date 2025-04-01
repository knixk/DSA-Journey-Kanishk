// problem link:
// https://leetcode.com/problems/length-of-last-word/description/


/*


*/

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int n = s.size(); // Get the length of the string
        int i = n - 1;    // Start from the last index
        int length = 0;   // Store the length of the last word

        // Step 1: Ignore trailing spaces
        while (i >= 0 && s[i] == ' ')
        {
            i--; // Move left until we find a non-space character
        }

        // Step 2: Count the length of the last word
        while (i >= 0 && s[i] != ' ')
        {
            length++; // Increase count for each non-space character
            i--;      // Move left
        }

        return length; // Return the length of the last word
    }
};


/*
summary:
basically we go from the right,
we say, first of all let's try to find a char which is not " " empty space, using a whiel loop

then we say run another while loop, and we increment the counter or length of our ans, untill we reach a space,
and we decrement the i counter..

after we exhaust this loop too,
we return the length,
that's it

o(n)
o(1)
*/