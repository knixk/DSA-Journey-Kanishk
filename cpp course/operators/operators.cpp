#include <iostream>
using namespace std;


/* 
NOTE:

*/

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // Q. use the and or and not operator in cpp

    bool ans = false && true; // false
    bool ans2 = false || true; // true
    bool ans3 = !false; // true;

    // You can also do it this way
    // bool ans = false and true; // false
    // bool ans2 = false or true; // true
    // bool ans3 = !false; // true;


    cout << ans << ans2 << ans3;

	return 0;
}