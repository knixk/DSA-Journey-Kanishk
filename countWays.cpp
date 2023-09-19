// code not perfect yet
#include <bits/stdc++.h>
using namespace std;

int countWays(vector<int> arr, int i, int n, int target, vector<int> & dp) {
    
    // base case
    
    if (n == 0) {
        if (target == 0) {
            dp[i] = 1;
            return 1;
            
        } else {
            dp[i] = 0;
            return 0;
        }
    }
    
    // recursive case
    
    // cout << "in rec" << "\n";
    
    if (dp[i] != -1) {
        return dp[i];        
    }
    
    int inc = countWays(arr, i + 1, n - 1, target - arr[i], dp);
    int exc = countWays(arr, i + 1, n - 1, target, dp);
    int ans = inc + exc;
    
    dp[i] = ans;
    
    return ans;
}


int main() {   
    
    vector<int> arr = {2, 3, 1, 5, 6, 4};
    
    int n = arr.size(), ans, target;
    
    vector<int> dp(n, -1);
    
    cin >> target;
    
    ans = countWays(arr, 0, n, target, dp);
    
    cout << ans << "\n";
    
    for (auto x : dp) {
        //cout << x << " ";
    }

    return 0;
}