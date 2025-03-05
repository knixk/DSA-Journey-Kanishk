#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    bool isCodingFun = true;
    bool isFishTasty = false;

// when we add both of these it works
    cout << isCodingFun + isFishTasty;
    cout << isCodingFun * isFishTasty;
    cout << isCodingFun - isFishTasty;
    // cout << isCodingFun / isFishTasty;
    // cout << isCodingFun % isFishTasty;

	return 0;
}