#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
NOTE:
problem link:
https://www.hackerrank.com/challenges/one-week-preparation-kit-zig-zag-sequence/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-week-preparation-kit&playlist_slugs%5B%5D=one-week-day-three

basically u have let's say an arr
1 3 10 5 6
sort it

1 3 5 6 10

what's k? ie  (n + 1) / 2  : basically midpoint

loop over the first,

loop over from end

swap the midpoint with position at k,


*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif
    
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;

        // make sure to init the arr with a size, otherwise, segmentation err happens
        vector<int> arr;
        vector<int> ans;
        
        for (int i = 0; i < n; i++) {
            int temp; cin >> temp;
            // arr[i] = temp;
            arr.push_back(temp);
        }

        // do some transformation
        sort(arr.begin(), arr.end());

        // int size = arr.size();


        // if u use ( n + 1 ) / 2, it will always find the middle idx
        // basically the mid point, -1 to get the index
        int k = (n + 1) / 2;

        // don't subtract from k, no need
        // --k;


        // swap the last character with k, as it has to be the most large element
        // create a temp var to store the digit, otherwise well lose it
        int temp = arr[k];
        arr[k] = arr[n - 1];
        arr[n - 1] = temp;


        // set the elements til and including k
        for (int i = 0; i <= k; i++) {
            ans.push_back(arr[i]);
        }


        // set the elements til and including k
        for (int j = n - 2; j > k; j--) {
            ans.push_back(arr[j]);
        }


        // ans.push_back(arr[n - 1]);
        
        // print the ans arr     
        for (auto x : ans) {
            cout << x << " ";
        }

        cout << endl;
        
    }

    // cout << " hi";
    
    
    return 0;
}
