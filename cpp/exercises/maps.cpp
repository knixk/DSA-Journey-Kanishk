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
        
  int t;
    cin >> t;
    map<string, int> m;

    while (t--) {
        int one, three;
        string two;
        
        cin >> one;
        if (one == 1) {
            cin >> two >> three;
            m[two] = three; // No need to check find(), direct assignment works
        } 
        else if (one == 2) {
            cin >> two;
            m.erase(two);
        } 
        else (one == 3) { // Print case
            cin >> two;
            if (m.find(two) != m.end()) {
                cout << m[two];
            } else {
                cout << 0;
            }
            cout << endl;
        }
    }
    return 0;  
}
