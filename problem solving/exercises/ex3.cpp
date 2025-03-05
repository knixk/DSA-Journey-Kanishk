#include <iostream>
#include <vector>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // q. use a switch statement based on diff values

    // int a; cin >> a;

    // switch(a) {
    //     case 1:
    //         cout << "yes";
    //         break;
    //     case 2:
    //         cout << "no";
    //         break;
    //     case 3:
    //         cout << "perf";
    //         break;
    //     default:
    //         cout << "uh oh";
    // }

    // q. use a for loop to print animal names
    vector<string> names;
    names.push_back("giraffe");
    names.push_back("iguana");
    names.push_back("lion");

    // int n = sizeof(names) / sizeof(string);
    int n = names.size();

    // cout << n;

    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
    
    


	return 0;
}