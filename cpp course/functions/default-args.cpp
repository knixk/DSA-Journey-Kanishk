#include <iostream>
using namespace std;


/* 
NOTE:

*/


// do a declaration

// this the syntax for default args b = 20
int sumOfTwo(int a = 10, int b = 20) {
    return a + b;
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // use default args

    // NOTE:

    /*
    even if u don't pass any arg to the function,
    if it has the default value,
    it will use it
     */
    int ans = sumOfTwo();
    int ans2 = sumOfTwo(10);
    int ans3 = sumOfTwo(2, 23);


    cout << ans << endl;
    cout << ans2 << endl;
    cout << ans3 << endl;



	return 0;
}