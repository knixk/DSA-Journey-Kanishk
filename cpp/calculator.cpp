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