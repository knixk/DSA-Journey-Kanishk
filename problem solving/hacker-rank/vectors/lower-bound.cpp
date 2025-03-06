#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


/* 

NOTE:
we take an iterator (it's basically a pointer) of type auto, new feature in cpp

when u call the lower bound method, takes three args, begin end, and the key to look for,
it returns the first index it founds,

Q. what if you're told to find the second occurence?
so..
basically we give the iterator arr.begin() + idx? isn't it?

dont' just say do it


*/

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> arr; 
    int n; cin >> n;
    while (n--) {
        int num; cin >> num;
        arr.push_back(num);
    }
    int q; cin >> q;
    while (q--) {
        int key; cin >> key;
        auto it = lower_bound(arr.begin(), arr.end(), key);
        if (*it) {
            cout << "Yes " << *it;
            break;
        }
    }
    
    return 0;
}
