#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
	
// };

// basically you have a string
	// you want to compress it
	// ex aaaabbb -> a4b3
	// ex abbbbc  -> ab4c

void compress(vector<char>& chars) {	
	map <char, int> map;
	// int n = chars.size();

	for (auto x : chars) {
		map[x]++;
	}

	vector<char> ans;

	for (auto x : map) {
		if (x.second == 1) {
			ans.push_back(x.first);
		} 

		if (x.second > 1) {
			ans.push_back(x.first);
			// char second = static_cast<char>(x.second);
			cout << x.second << " second";
			// ans.push_back(second);
			
		}

		// cout << x.first << " " << x.second << " ";
	}

	for (auto x : ans) {
		cout << x << " ";
	}


}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif
	int n; cin >> n;
	vector<char> charArr(n);

	for (int i = 0; i < n; i++) {
		cin >> charArr[i];
	}

	compress(charArr);
	

}



class Solution {
public:
    int compress(vector<char>& chars) {

        int count = 1;
        string ans;
        ans.push_back(chars[0]);
        for(int i=1; i<chars.size(); i++){
            if(chars[i] == chars[i-1])
                count++;
            else{
                if(count > 1)
                    ans = ans + to_string(count);      
                count = 1;
                ans.push_back(chars[i]);
            }
        }
        if(count > 1)
            ans = ans + to_string(count);
        for(int i=0; i<ans.length(); i++)
            chars[i] = ans[i];       
        return ans.size();
    }
};