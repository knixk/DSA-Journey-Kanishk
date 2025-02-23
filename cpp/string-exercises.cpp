#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

// void reverseStr(string s, int i) {
//     // base case

//     if (i == s.size() - 1) {
//         // we're at the last char
//         cout << s[i];
//         return;
//     }

//     // recursive case
//     reverseStr(s, i + 1);
//     cout << s[i];

// }

void printStr(string s, int i) {
    // base case

    if (i == s.size() - 1) {
        // we're at the last char
        cout << s[i];
        return;
    }

    cout << s[i];
    // recursive case
    printStr(s, i + 1);

};

bool customCompare(int a, int b) {
    return a > b;
};

bool checkAnagrams(string one, string two) {

    map<char, int> m1, m2;

    for (auto x : one) {
        m1[x]++;

    }

    for (auto x : two) {
        m2[x]++;
    }

    for (auto x : m1) {
        if (m2[x.first] == x.second) {
            continue;
        } else {
            return false;
        }
    }

    return true;

    // for (auto x : m2) {
    //     cout << x.first;
    // }

};

int mostOccurence(string s, char key) {

    char ans;
    char largest = -1;

    int n = s.size();
    map<char, int> m;

    for (auto x : s) {
        m[x]++;
    }

    // sort(m.begin(), m.end(), customCompare);


    for (auto x : m) {
        // cout << x.first << " : " << x.second << endl;
        if (x.second > largest) {
            ans = x.first;
            largest = x.second;
        }
    }

    return ans;
};



int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // string s;
    // cin >> s;

    // q. append a number to each character in string..  done
    // q. reverse a string, find palindrome, find anagram
    // q. reverse a string with recursion
    // q. find the most occurence in string
    // q. implement merge sort.
    // q. jeez when u will do this?
    // if u can't solve these everything is useless

    string str = "ameG";
    string str2 = "Gaem";

    bool ans = checkAnagrams(str, str2);
    cout << ans;

    // string ans;
    // int count = 1;

    // char ans = mostOccurence(str, 'e');

    // cout << ans;

    // can u find anagram?

    // reverse a string using rec
    // reverseStr(sstr, 0);

    // cout << endl;

    // printStr(str, 0);

    // find the most occurence of char..





    // for (char x : str) {
    //     // cout << x;
    //     ans += x;
    //     char num = count;
    //     ans += num;
    //     count++;

    // }

    // cout << ans;

    // use convert to string:

    // for (char x : str) {
    //     ans += x;
    //     ans += to_string(count); // Convert number to string
    //     count++;
    // }

    // cout << ans;

	return 0;
}