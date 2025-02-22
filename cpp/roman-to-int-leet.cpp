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

            int i = 0;


            while (i <= n - 1) {
                char cur = s[i];

                int cur_val = m[cur];
                char next = s[i + 1];   

                // if (i == n) {
                //     sum += cur_val;
                //     break;
                // }

                int next_val = m[next];

                int sum = 0;
                int diff = 0;




                if (cur_val > next_val or cur_val == next_val) {
                    // simply add, increment sum with two nums
                    sum = cur_val + next_val;
                    ans += sum;
                } else if (cur_val < next_val) {
                    // subtract cur from next, increment sum of this
                    diff = next_val - cur_val;
                    ans += diff;
                } 

                // int check_bounds = i;
                // int diff2 = abs(2 - check_bounds);

                // if (diff2) 

                i++;
                i++;

                // if (i + 2 > n) {
                //     char lastChar = s[n];
                //     int finalDigit = m[lastChar];
                //     sum += finalDigit;
                //     break;
                // }

            }

            return ans;


        }
    };