class Solution {
public:

    bool isIsomorphic(string s, string t) {

        int n = s.length();

        unordered_map <char, char> m1, m2;

        int i = 0;

        while (i < n) {
        	// basically we are trying a 1 : 1 mapping
        	if ((m1[s[i]] && m1[s[i]] != t[i]) or
        		(m2[t[i]] && m2[t[i]] != s[i])) {
        		return false;
        	} else {
        		m1[s[i]] = t[i];
        		m2[t[i]] = s[i];
        	}

    		i++;
        }

        return true;	
    }
};