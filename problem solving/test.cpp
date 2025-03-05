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

    vector <int> arr = {1, 2, 3, 4};

    // kunnen sie funden das position of 3 in arr?
    int key = 2;
    auto it = lower_bound(arr.begin(), arr.end(), key);

    cout << *it;

    // cout << "hi"; 
    // for (int i = 0; i < arr.size(); i++) {
    //     cout << arr[i];
    // }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
