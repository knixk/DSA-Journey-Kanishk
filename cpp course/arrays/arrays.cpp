#include <iostream>
using namespace std;


/* 
NOTE:
!IMPORTANT,
its crucial to write comments otherwise,
you'll lose the context, 

and write some explanations
*/

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // how to declare an arr in cpp
    /* 

    dataype arr_name [] = {};

    datatype arr[SIZE];
    datatype arr[SIZE] = { ...SIZE elems}


    */
    int my_arr[] = {1, 2, 3, 4, 5};

    char char_arr[] = {'a', 'b', 'c'};

    bool bool_arr[] = {false, true, false};

    // now doing this will give u an err, where elems
    // are more than the size 
    // int arr2[3] = {1, 2, 3, 4};


    for (auto x : my_arr) {
        cout << x;
    }

   for (auto x : char_arr) {
        cout << x;
    }

   for (auto x : bool_arr) {
        cout << x;
    }

    cout << endl << endl;

    // Q. make arr of size 5 and take input
    int sm_arr[5];
    // notice we did not defined the values for this arr yet

    for (int i = 0; i < 5; ++i) {
        int temp;
        cin >> temp;
        sm_arr[i] = temp;

        // you can also say
        // cin >> arr[i];
    }

    for (auto x : sm_arr) {
        cout << x << endl;
    }

    // works

    // Q. find sum of all elements in an arr

    int sum = 0;

    for (auto x : sm_arr) {
        sum += x;
    }

    cout << sum << endl;

    // works

    // Q. calclate the avg of sm_arr
    float N = 5;

    float avg = sum / N;

    cout << avg;

    // yes



    // for (auto x : sm_arr) { 

    // }


	return 0;
}