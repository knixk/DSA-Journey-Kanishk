class Solution {
public:

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
};