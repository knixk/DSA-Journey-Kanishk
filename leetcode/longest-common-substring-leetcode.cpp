/*
NOTE: very imp to remember context

 */


#include <bits/stdc++.h>
using namespace std;


int lengthOfLongestSubstring(string s) {
    map<char, int> m;
    int n = s.size();
    int maxCount = INT_MIN;

    for (int i = 0; i < n; i++) {
        int curCount = 0;
        for (int j = i; j < n; j++) {
            char curChar = s[j];
            if (!m[curChar]) {
                // i want to add
                m[curChar]++;
                curCount++;
                maxCount = max(curCount, maxCount);
            } else if (m[j] > 1) {
                // i want to clear hashmap and break this j loop
                m.clear();
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
