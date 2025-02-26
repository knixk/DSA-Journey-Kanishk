
/* 
Note:
problem is from leetcode

given roman charaters,
convert it into a legibal decimal vesrion right..

so we basically have a formula

if the character at left is greater than right,
simply add

if the charatcter at left is less than right
subtract it from right..



I think we might have got this incomplete

*/


    class Solution {
    public:
        int romanToInt(string s) {

            unordered_map<char, int> m;
            m['I'] = 1;
            m['V'] = 5;
            m['X'] = 10;
            m['L'] = 50;
            m['C'] = 100;
            m['D'] = 500;
            m['M'] = 1000;


            int ans = 0;
            

            int n = s.size() - 1;
            int prev = INT_MAX;

            for (int i = 0; i <= n; ++i) {
                char cur = s[i];
                int cur_val = m[cur];



            }

            return ans;


        }
    };