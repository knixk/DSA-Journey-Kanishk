#include <bits/stdc++.h>
using namespace std;

string stringWindow(string s, string p) {



}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string s, p;
	cin >> s >> p;

	cout <<  

	return 0;

}








class Solution {
public:
    string minWindow(string s, string t) {
        
    	// here t is the pattern we are matching

    	unordered_map <char, int> map_s, map_t;

    	int sn = s.length(), tn = t.length();

    	int cnt = 0;
    	int min_so_far = INT_MAX;
    	int start_idx = -1;
    	int start = 0;
    	int window_size;
    	 
    	for (int i = 0; i < tn; i++) {
    		map_t[t[i]]++;
    	}

    	for (int i = 0; i < sn; i++) {

    		char ch = s[i];
    		map_s[ch]++;

    		// if not there or less than we need, then expand	
    		if (map_t[ch] != 0 and map_s[ch] <= map_t[ch]) {
    			// count the chars
    			cnt += 1;
    		}

    		// if cnt == len then we can contract

    		if (cnt == tn) {
    			// if it doesn't exist on the pattern map or greater than required then remove
    			while (map_t[s[start]] == 0 or map_t[s[start]] < map_s[s[start]]) {
    				map_s[s[start]]--;
    				start++;
    			}

    		}
f
    		// note window size
    		window_size = i - start + 1; // 1 for the idxing

    		if (window_size < min_so_far) {
    			min_so_far = window_size;
    			start_idx = start;
    		}

    	}

    	if (start_idx == -1) {
    		return "";
    	} else {
    		return s.substr(start_idx,min_so_far);
    	}
    }
};