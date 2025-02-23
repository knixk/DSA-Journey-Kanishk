#include <iostream>
#include <string>
using namespace std;

void reverseStr(string s, int i) {
    // base case

    if (i == s.size() - 1) {
        // we're at the last char
        cout << s[i];
        return;
    }

    // recursive case
    reverseStr(s, i + 1);
    cout << s[i];

}

void printStr(string s, int i) {
    // base case

    if (i == s.size() - 1) {
        // we're at the last char
        cout << i;
        return;
    }

    cout << i;
    // recursive case
    reverseStr(s, i + 1);

}



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

    string str = "HelloEveryone";
    // string ans;
    int count = 1;

    // reverse a string using rec
    // reverseStr(sstr, 0);

    // cout << endl;

    printStr(str, 0);



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