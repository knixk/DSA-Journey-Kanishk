#include <iostream>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        // Get the sizes of haystack and needle
        int hN = haystack.size();
        int nN = needle.size();

        // Pointers to track positions in haystack and needle
        int i = 0; // for haystack
        int j = 0; // for needle

        // Edge case: if needle is larger than haystack, return -1 immediately
        if (nN > hN)
        {
            return -1;
        }

        while (i < hN)
        {
            int firstOcc = i; // Store the first occurrence index

            j = 0; // Reset needle pointer at each new potential start point

            // Now, we try to match the needle with the substring of haystack
            while (i < hN && j < nN && haystack[i] == needle[j])
            {
                i++; // Move haystack pointer
                j++; // Move needle pointer
            }

            // after the while loops exhaust and we have reached the length of second string, we have our ans as firstOcc

            // If we have matched all characters in needle, return the starting index
            if (j == nN)
            {
                return firstOcc;
            }

            // Otherwise, reset i to start from firstOcc + 1 and try again
            i = firstOcc + 1; // Move to the next character in haystack
        }

        // If we exhaust the haystack without a full match, return -1
        return -1;
    }
};

int main()
{
    Solution solution;
    string haystack = "sadbutsad";
    string needle = "sad";

    int result = solution.strStr(haystack, needle);
    cout << "First occurrence index: " << result << endl;

    return 0;
}


//  this code works