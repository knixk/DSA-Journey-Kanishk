class Solution {
    public:
        int strStr(string haystack, string needle) {
            // note u can either use the size() or the length() for a string to get the size
            int hN = haystack.size();
            int nN = needle.size();

            int i = 0;
            int j = 0;


            while (true) {


                if (i == hN) {
                    // we have exhausted our arr
                    /*
                    there is no possibility of finding now..
                    */

                    return -1;
                }

                int firstOcc = -1;
                char first = haystack[i];
                char second = needle[j];

                if (first == second) {
                    // we can advance both pointers
                    i++;
                    j++;
                } else if (j == nN) {
                    // this means the last char was reached
                    return firstOcc;
                } else {
                    // we beed to reset j and increment i
                    j = 0;
                    i++;
                }

                // otherwise we need to do something else,
                // like what

                /*
                
                */
            }

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