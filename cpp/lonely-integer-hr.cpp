#include <bits/stdc++.h>
using namespace std;


int lonelyinteger(vector<int> a) {
    map<int, int> m;
    int n = a.size();
    int ans;
    
    for (int i = 0; i < n; i++) {
        int digit = a[i];
        m[digit] += 1;
        // m[i]++;
    }
    
    for (auto x : m) {
        cout << x.first << " " << x.second << endl;
        if (x.second == 1) {
            // cout << x.first;
            // return x.first;
            ans = x.first;
            // break;
        }
    }
    
    return ans;
};

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    vector<int> q = {1, 1, 2, 3, 3};

    int ans = lonelyinteger(q);

    cout << ans;


    return 0;
}