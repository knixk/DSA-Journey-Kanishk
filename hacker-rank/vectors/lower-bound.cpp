#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
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
        }
    }
    
    return 0;
}
