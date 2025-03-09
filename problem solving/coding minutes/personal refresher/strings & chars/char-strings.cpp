#include <iostream>

// header files for strings c style

#include <cstring>
using namespace std;


/* 
NOTE:
VERY CRUCIAL TO MAKE A NOTE,
otherwise the context is lost

solving exercises and questions is the most important


note2:


*/

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // Q. create a char arr with two diff methods
    char carr[] = {'a', 'b', 'c', '\0'};
    char carr2[] = "perfect!";


    // suprisingly we can do this!
    cout << carr << " " << carr2;

    // Q. use strlen fn from cstring header file
    // Q. also see what size of gives u

    // gives the correct size , 3
    cout << strlen(carr);

    // gives one more, becz of null char , 4
    cout << sizeof(carr);

    // Q. USE CIN to take input an char arr

    cout << endl;   

    char carr3[100];
    cin >> carr3;

    cout << carr3 << endl;

    // Q. what happens when u try to give input which has
    // space?

    // ans: it basically terminates before the space,
    // storing only the vals before space


    return 0;
}