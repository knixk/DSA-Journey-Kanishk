/*
NOTE: very imp to remember context
problem name:
Longest Substring Without Repeating Characters
link:
https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

q. Given a string s, find the length of the longest substring 
without duplicate characters.

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.


NOTE2: basically we wanted to return the long substring, without repeating
characters,

we used two loops,

one goes from 0 to n,
other goes from,

the first loop, til n, (if i = 3, j will start from 3 and so on..)


we are using a hashmap,
if that current character at hashmap doesn't exist,
we put it inside hashmap, (increment the count)

if it exists or the count is greater than 1,
we want to clear this hashmap,
reset the count of substring to 0,

also we maintain a largest count yet.

 */


#include <bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string s) {
    map<char, int> m;
    int n = s.size();
    int maxCount = INT_MIN;

    if (n == 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int curCount = 0;
        for (int j = i; j < n; j++) {
            char curChar = s[j];

            if (!m[curChar]) {
                // i want to add
                m[curChar]++;
                curCount++;
                maxCount = max(curCount, maxCount);
            } else if (m[curChar] >= 1) {
                // i want to clear hashmap and break this j loop
                m.clear();
                curCount = 0;
                break;
            }

        }
    }

    return maxCount;


}

int main() {

        #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif


    string s = "pwwkew";
    int ans = lengthOfLongestSubstring(s);
    cout << ans;
    return 0;
}
