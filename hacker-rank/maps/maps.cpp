#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    #ifndef ONLINE_JUDGE      
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // cout << "hi";
        
  int t;
    cin >> t;
    map<string, int> m;

    while (t--) {
        int one, three;
        string two;
        
        cin >> one;
        if (one == 1) {
            cin >> two >> three;
            // m[two] += three;


        } 
        else if (one == 2) {
            cin >> two;
            // m.erase(two);
        } 
        else { // Print case
            cin >> two;
            // if (m.find(two) != m.end()) {
            //     cout << m[two];
            // } else {
            //     cout << 0;
            // }

            // cout << m[two] << " :im print";

            // cout << endl;
        }
    }

    for (auto it = m.begin(); it != m.end(); it++) {
      cout << it;
    }
    return 0;  
}
