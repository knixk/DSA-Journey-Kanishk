class Solution {
public:
    string breakPalindrome(string s) {

        int n = s.length();

        if (n == 0) {
        	return "";
        }

        string s2 = s;

        // 1 2 3 4
        // n = 3 (idx) 

        for (int i = 0; i < n / 2; i++) {
        	int j = n - i - 1;

        	// if you come accross a middle char
        	if (i == j) {
        		continue;
        	}

        	if (s2[i] != 'a') {
        		s2[i] = 'a';
        		return s2;
        	}
        }

        s2[n - 1] = 'b';

        return s2;
    }
};