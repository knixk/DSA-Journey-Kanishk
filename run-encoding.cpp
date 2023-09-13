#include<bits/stdc++.h>
using namespace std;

//str is the input the string
string compressString(const string &str){   
    //complete the function to return output string
  
    map <char, int> myMap;

    for (auto letter : str) {
    	myMap[letter]++;
    }

    string ans = "";

    for (auto i = myMap.begin(); i != myMap.end(); i++) {
    	// cout << i->first << " ";
    	// cout << i->second << " ";

    	string temp = (i->first) + to_string(i->second);
    	ans += temp;
    	// cout << temp;
    }



    if (ans.length() > str.length()) {
    	return str;
    }

    return ans;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string ques = "abcd";

	string ans = compressString(ques);

	cout << ans;

	return 0;
}