#include <iostream>
using namespace std;


/* 
NOTE:
use a do while loop
*/

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // Q. print i from 1 to 10
    int i = 1;

    do {
        if (i == 10) {
            cout << i;
            break;
        }
        cout << i << ", ";
        i++;
    } while (i <= 10); // make sure to use this semicolon

	return 0;
}