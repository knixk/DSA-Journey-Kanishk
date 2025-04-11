/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int main()
{
    vector<int> arr = {7, 5, 3, 4, 5, 6};
    // q. can u do bubble sort?

    int n = arr.size();

    /*
    if im not wrong.. we used to bubble the largest or the smallest elements to the end,

    we would run the outer loop n - 2 times?
    so basically for a single element, 
    we bubble it towards the end can u do it?

    */

    for (int i = 0; i < n - 1; i++) { // the last element will be automagically sorted right?
        // so we don't go till that leement
        for (int j = 0; j < n - i - 1; j++) {
            // the reason we do this is because
            /*
            first of all we go to the second last index at most right..i

            and we reduce our search as i grows,
            because we know that element has been sorted after that i must have ended right?
            */
            // do the same for this? go one less then that?
            if (arr[j] > arr[j + 1]) {
                // swap it!
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }

    // will this work?

    /*
    need to check it tho..
    */

    for (auto x : arr) {
        cout << x << " ";
    }

    // works now

    /*
    OUT: 0 n - 2 idx
    INNER: 0, N - 2 - i idex (including the second index.)
    
    */

    return 0;
}