#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // q. create a calculator:

    /*
    Notes:
    input was like this:

        1
        +
        2
        y
        -
        20
        n

    output was like this:

        Enter first num: 
        enter operator: (+, -) 
        Enter next number: 
        3
        Do you want to add more? 
        enter operator: (+, -) 
        Enter next number: 
        -19
        Do you want to add more? 

        SUMMARY:
        basically we have two ints, and one operator which is a char,
        we use a while loop, to iterate forever until the users wants to do some operations:
        we use a switch statement to manually do the operation,
        we cout the ans and ask to continue or end, that's it
     */

    int a, b;
    char op;

    cout << "Enter first num: \n";
    cin >> a;


    while (1) {
        cout << "enter operator: (+, -) \n";
        cin >> op;

        cout << "Enter next number: \n";
        cin >> b;

        int ans;

        switch (op) {
        case '+':
            ans = a + b;

            break;
        case '-':
            ans = a - b;
            break;
        default:
            cout << "Invalid operation.. \n";
            break;
        }

        cout << ans << endl;

        cout << "Do you want to add more? \n";

        char choose;
        cin >> choose;

        if (choose == 'y') {
            continue;
        } else {
            break;
        }

        a = ans;



    }

	return 0;
}