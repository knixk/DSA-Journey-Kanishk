
// this code works

/*
q. what's the complexity?
seems o(n ^ 2)
space is just o (1)


(VERY CRUCIAL TO MAKE A NOTE, otherwise all is useless)
summary:

we had to iterate over two arrs and find if the first contains the second,
if yes, what's the first idx,

i make a while loop first of all and make sure it's not an infinite one,
then i set the firstOcc to i,
and make j = 0, like we are checking for htis idx

now i make another while loop

so i can exhaust the j arr with i,
if j reaches the length of secondd arr,
we have found our ans,
we return it,

if the second while loop, exhausts before it reaches secondstring length,
we make i to first Occ + 1; 
and make j to 0]

and that's it, we foudn our ans

*/

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // note u can either use the size() or the length() for a string to get the size
        int hN = haystack.size();
        int nN = needle.size();

        int i = 0;
        int j = 0;

        if (nN > hN)
            return -1; // impossible to find such an idx

        while (i < hN)
        {

            int firstOcc = i;

            if (i == hN)
            {
                // we have exhausted our arr
                /*
                there is no possibility of finding now..
                */

                return -1;
            }

            /*
            use a while loop here to exhaust i and j
            */

            while (i < hN && j < nN && haystack[i] == needle[j]) // this was good but need some changes like this
            {

                // we can advance both pointers
                i++;
                j++;
            }

            //  previously i was checking it each time inside the for loop and reseetting second occur // it wasn't correct basically

            if (j == nN)
            {
                // this means the last char was reached
                return firstOcc;
            }
            else
            {
                // we beed to reset j and increment i
                j = 0;
                // i++; // why not do this?
                // basically we wanna make sure we start from the next idx of the char we chose so we don't ignore any chars..

                // or skip characters.. now i understand
                i = firstOcc + 1;

                /*
                it seems like if a mismatch happened, i has moved long fast,
                hmm

                */
            }

            // otherwise we need to do something else,
            // like what

            /*

            */
        }

        return -1;
    }
};

/*
basically we're given two strings,
with a haystack, and needle

we need to find the first occurence of the string,

so do we even care about the second idx?


so let's say


haystack = sadbutsad
needle = sad



is the char at haystack equal to needle?
if yes, why don't we iterate till the as much we can

*/