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

    cout << endl << endl;

    // Q. can u use a while loop to print from 89 to 79?

    int j = 89;

    while (j >= 79) {
        if (j == 79) {
            cout << j;
            break;
        }
        cout << j << ", ";
        j--;
    }

    // Q. can you use the break and continue keyword?


    cout << endl << endl;
    for (int i = 1; i <= 10; ++i) {

        // if the current number divides 2 completely
        // we can also write with bitwise say,
        // (i & 2)   // one for even, 0 for add
        if (i % 2 == 0) {
            cout << "number is even\n";
            continue;
        }

        // Weird it's not even printing eight
        // fix this somehow
        // if (i == 8) {
        //     cout << " im eight";
        //     break;
        // }

        // it won't print the even numbers, only the odd ones right..
        // also it won't print after 7
        cout << i << "\n";
    }

	return 0;
}