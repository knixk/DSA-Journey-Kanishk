#include<bits/stdc++.h>
using namespace std;

// from codigms udemy course

void sortPermutations(string & s, int j, vector<string> & ans) {

    if (j == temp.size()) {
        ans.push_back(temp);
    }

    for (int i = j; i < n; i++) {

        

    }

}


vector<string> findSortedPermutations(string s){
    //Your code goes here. Do not change the function or parameters. You can use helper functions if needed.
    int n = s.size();
    int j = 0;
    string temp = "";
    vector<string> ans;

    sortPermutations(s, j, ans);

    return ans;

}


