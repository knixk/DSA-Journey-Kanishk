/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    // q. print all subarr? // can u do it?
    /*
    can you?

    print like 1, 12, 123, 1234, 12345, 123456
                2, 23, 234, 2345, 23456,
                3, 34, 345, 3456,
                4, 45, 456,
                5, 56,
                6

                this should be the ans?
    */

    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                cout << arr[k] << ", ";
            }

            cout << endl;
        }
        cout << endl;
    }

    /*
    this should do the job right? let's test it..

    it seems like we were increment j for inifinite times, because of a wrong condition  in second loop,
    neverttheless fixed it!
    */

    /*
    damn thi worked way better than expected! and this is good!
    */

    return 0;
}