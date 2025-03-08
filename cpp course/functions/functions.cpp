#include <iostream>
using namespace std;


/* 
NOTE:
functions give u reusablility,
reduce the number of lines of code


NOTE2:
You can't return an int from a function of type void,

it will give a compilation err
*/


// this won't work if u put it in the main,
// ig it will be a recursive fn? idk

// this is called function declaration
void sayHello() {
    cout << "hi guys" << endl;
}

// notice you have to give a return type to each fn, it
// can be void but should be there otherwise err
int sumOfNums(int a, int b) {
    return a + b;
}

// example of function declaration:

int minusOfNums(int a, int b); // declaration

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif


    // define a function and call it

    sayHello();
    sayHello();
    sayHello();

    // Q. use the return keyword to return an ans
    int a, b;
    // if u don't give an input in the box,
    // it will use some garbage values
    cin >> a >>  b;

    int ans = sumOfNums(a, b);
    cout << ans << endl;

    // Give example of function declaration and definition

    int ans2 = minusOfNums(a, b);
    cout << ans2 << endl;



	return 0;
}

// function definition
int minusOfNums(int a, int b) {
    return a - b;
}

// works

/*
err if u remove this:
 undefined reference to `minusOfNums(int, int)'
 */