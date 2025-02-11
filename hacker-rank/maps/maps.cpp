#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


int main() {
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
 int t; cin >> t;
    map<string, int> m;
    while (t--) {
        int one, three;
        string two;
        
         cin >> one;
         if (one == 1) {
             cin >> two >> three;

             m[two] = three;

            cout << "inserted";
         } else if (one == 2) {
             cin >> two;

            // delete
             cout << "erased";
            m.erase(two);
         } else {
            // print
            cout << "updated";
             cin >> two;
             int val = m.count(two);
             if (val) {
                cout << m[two];
             } else {
                cout << 0;
             }
         }
                     cout << endl;
        
        
    }
    return 0;

    // auto it = m.begin();

    // while (it != m.end()) {
    //     cout << "never run";
    //     cout << it->first;
    //     ++it;
    // }



}
