#include <bits/stdc++.h>
using namespace std;


bool isVowel(char value) {

    string vowels = "aeiou";

    for (auto x : vowels) {

        if (value == x) {
            return true;
        }
    }

    return false;

}   

string reverseVowels(string s) {
    
    int n = s.length(), m;

    string vowels = "", reverseVowels = "";

    for (int i = 0; i < n; i++) {

        char current = s[i];

        if (isVowel(tolower(current))) {

            vowels += current;
            
        }

    }

    m = vowels.length();

    for (int i = m - 1; i >= 0; i--) {

        reverseVowels += vowels[i];

    }
    
    // now we wanna do it iterate with this and place the reverse vowels

    int p = 0, q = 0;

    while (p < n and q < m) {

        if (isVowel(tolower(s[p]))) {
            s[p] = reverseVowels[q];
            q++;
        }

        p++;
    }

    return s;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    string s; cin >> s;

    string ans = reverseVowels(s);

    cout << ans;

}

/* 

we must be able to fix these bugs and all

*/