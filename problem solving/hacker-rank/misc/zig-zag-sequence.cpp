#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* 
NOTE:

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
    
    int t; cin >> t;
    
    while(t--) {
        int n; cin >> n;
        vector<int> arr;
        vector<int> ans;
        
        while (n--) {
            int temp; cin >> temp;
            arr.push_back(temp);
        }
        
        // do some transformation
        arr.sort(arr.begin(), arr.end());

        // if u use ( n + 1 ) / 2, it will always find the middle idx
        // basically the mid point, -1 to get the index
        int k = (arr.size() + 1) / 2;
        --k;

        for (int i = 0; i < k; i++) {

        }

        for (int j = n - 1; i <= k; i++) {

        }
        
        // print the ans arr     
        
    }
    
    
    return 0;
}
