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

    int n; cin >> n;
    vector<int> ans;
    
    while (n--) {
        int num; cin >> num;
        ans.push_back(num);
    }
    
    int eleToRemove; cin >> eleToRemove;
    int range_one, range_two;
    cin >> range_one >> range_two;
    eleToRemove--;
    range_one--;
    range_two--;


    // 1 4 6 2 8 9
    // 1 6 2 8 9 -- removed ele at pos 2 (4)
    // 1 8 9 -- remove elems from pos 2, til 3 excluding 4 pos

    ans.erase(ans.begin() + eleToRemove);

    //  this was correct till here

    for (auto x : ans) {
        cout << x << " ";
    }
    
    cout << ans[range_one] << ": im range one" << endl;

    ans.erase(ans.begin() + range_one, ans.begin() + range_two);
    
    int final_size = ans.size();
    
    cout << final_size << endl;
    
    for (auto x : ans) {
        cout << x << " ";
    }
    
    
    
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
