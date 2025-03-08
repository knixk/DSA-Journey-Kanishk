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

    // Q. Read a line, split by spaces, and print tokens

    /*
    Example:
    // Input: "I love programming"
    // Output:
    // I
    // love
    // programming
 
     */

    /* 
    if you use cin, it will only take the consecutive chars,
    it breaks at the space and a new line
    */

    string s;
    cin >> s;    

    cout << s;




	return 0;
}