class Solution {
public:

    // void fillMap(map<char, int> & m, string & s, int n) {

    //     for (int = 0; i < n; i++) {

    //     }
    // }

    int lengthOfLongestSubstring(string s) {
        map<char, int> m;
        int n = s.size();
        int maxCount;

        for (int i = 0; i < n; i++) {
            int curCount = 0;
            for (int j = i; j < n; j++) {
                char curChar = s[j];
                if (!m[curChar]) {
                    // i want to add
                    m[curChar]++;
                } else if (m[j] > 1) {
                    // i want to clear hashmap and break this j loop
                    m.clear();
                    break;
                }

            }
        }


    }
};