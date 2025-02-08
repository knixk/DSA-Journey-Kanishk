#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif
    // stringstream ss;
    int n;
    cin >> n;
    
    vector<int> ans;
    
    while (n--) {
        int num;
        cin >> num;
        ans.push_back(num);     
    } 
    
    sort(ans.begin(), ans.end());
    
    for (auto x : ans) {
        cout << x << " ";
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
    
    
}
