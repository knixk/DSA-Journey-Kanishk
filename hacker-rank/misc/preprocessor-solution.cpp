#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
// #define INT_MAX 100000000
// #define INT_MIN -100000000

// template <typename T>

#define print(ele) cout << ele;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    int n;
    cin >> n;
    
    while (n--) {
        int num; cin >>  num;
        arr.push_back(num);
    }
    
    // int MIN = INT_MIN;
    // int MAX = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > MIN) {
            cout << "im " << arr[i];
            MAX = arr[i];
        } 

        if (arr[i] < MIN) {
            MIN = arr[i];
        }
    }

    cout << "\n\n";

    for (auto x : arr) {
        // cout << x << " ";
    }
    
    int diff = (MAX - MIN);

    // cout << diff;
    
    // return diff;
    cout << "" << diff;
       
    return 0;
}
