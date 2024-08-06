#include<bits/stdc++.h>
using namespace std;

// skip whitespaces
int whitespaces(string & s, int idx, int n) {

    while (idx < n && s[idx] == ' ') {
        idx++;
    } 

    return idx;
}

// upper and lower
int upperAndLower(string & s, int idx, int n) {

    // set upper
    if (idx < n && s[idx] != ' ') {
        s[idx] = toupper(s[idx]); 
        idx++;
    }

    // set lower
    while (idx < n && s[idx] != ' ') {
        s[idx] = tolower(s[idx]);
        idx++;
    }

    return idx;
}

string normalize(const string &sentence) {
    string copy = sentence;
    int n = copy.length();
    int idx = 0;
    // solve
    while (idx < n) {

        idx = whitespaces(copy, idx, n);
        idx = upperAndLower(copy, idx, n);
    }

    return copy;
    
}