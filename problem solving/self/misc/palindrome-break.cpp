#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
	int i = 0; int j = s.length() - 1;
	while (i < j) {
		if (s[i] != s[j]) {
			return false;
		} 
		i++;
		j--;
	}	
	return true;
}

string breakPalindrome(string palindrome) {
	
	int n = palindrome.length() - 1;
	string temp = palindrome;

	if (n == 0) {
		return "";
	}

	for (int i = 0; i < n; i++) {

		for (char j = 'a'; j <= 'z'; j++) {
			temp[i] = j;

			if (isPalindrome(temp)) {
				continue;
			} else {
				return temp;
			}
		}

	}	

	return temp;

}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string ques = "abccba";

	// cout << ques;
	cout << breakPalindrome(ques);
	// cout << isPalindrome(ques);


	return 0;
}

// --------

#include<bits/stdc++.h>
using namespace std;

    string breakPalindrome(string palindrome) {
	//If we have string size == 1, return "". Since any replacement cannot break the palindrome.
        if(palindrome.size() == 1)
            return "";
        
        vector<vector<int>> count(26);
        int firstNonA = -1;
        
        for(int i = 0; i < palindrome.size(); i++)
        {
            count[palindrome[i] - 'a'].push_back(i);
            
            //Update firstNonA index if its not yet found.
            if(firstNonA == -1 && palindrome[i] != 'a')
                firstNonA = i;
        }
        
        //If we have N-1 a's, we need to replace last a with b
        if(count[0].size() >= palindrome.size() - 1)
            palindrome[count[0].back()] = 'b';
        //Else replace first non-'a' character with 'a'
        else
            palindrome[firstNonA] = 'a';
        
        return palindrome;
    }