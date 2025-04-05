// problem link: https://leetcode.com/problems/valid-mountain-array/description/

/*
so basically we're given this problem and we have to find if there is
a valid mountain arr in this ...

mountain arr is

if it has a increasing followed by a decreasing order

0 1 2 3 1 0

is this a mountain arr?
YES
how?
it has 0 1 2 3 as inc and
1 0 as dec

also take note that, the order should be stricly greater than one only, even if diff is greater than 1, it's not valid...

something to take note that, the stricly greater one only follow for inc or decrease, not for both patters,

like there can be a diff of greater than 1

like

1 2 3 4 2 1 0, this is valid...  (4 is the peak)

if the length is less than 3, it can never be a mountain arr


*/

class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int n = arr.size();

        int i = 0;
        // int cur = arr[i];
        // int cur = arr[i];

        if (n < 3)
        {
            // if the size is less than 3, it can never be a valid mountains arr
            return false;
        }

        // bool incDone = false;
        // bool decDone = false;

        while (i < n - 1)
        {
            // while our cur elemt is smaller than next, we want to advance
            if (arr[i + 1] > arr[i])
            {
                // we can go ahead
                i++;
            }
            else
            {
                break;
            }

        }

        // after while loop ends, we have reached our peak


        // incDone = true;
        if (i == n - 1 || i == 0)
        // {   now we check..
            // if we never advanced or reached end already
            return false;
        }

        // i++; // no need to do this..

        while (i < n - 1)
        {   
            // now we check if the arr follows a decreasing manner, till and including the n - 2 idex
            // i was checking for a wrong condition in here..
            if (arr[i] > arr[i + 1] )
            {
                // we can go ahead
                i++;
            }
            else
            {
                break;
            }

            // we have reached our peak
        }

        if (i == n - 1)
        {
            return true;
        }

        return false;   
    }
};


/*
so basically what i did,
i used while loops,
to check if the item in arr at left is less than right, (diff should be one)
but idk why 
it works just to check that ok if its even greater its alr

similiary i did the same for decreasing sequence im sure u know..

now...

after the first while loop,
i check with a condition,
has my i even iterated from 0 position or reached end?
this means, it's not a mountain arr ok?

after the second while loop ends and i HAS reached end, so it is a mountain arr,
that's it..
*/