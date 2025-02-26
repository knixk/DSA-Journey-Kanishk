#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // double num = 3.12312312123;

    // cout << num << setprecision(5);

	// string s = "ab cd ef";

    string s;
    getline(cin, s);

    cout << s[1] << s[2];

    // cout << s;
    stringstream ss(s);

    string temp;

    /* so somehow what it does is,
    as long as there is something in the s stream, put that into temp,
    right..
    and do whatever with it
	*/

    vector<string> sarr;

    // one way to do it ----
    // while (ss >> temp) {
    // 	cout << temp << endl;
    // 	// sarr.push_back(temp);
    // }

    // otherwise if u want tokens do like this..
    while (getline(ss, temp, ':')) {
    	// cout << temp << endl;
    }

    for (auto x : sarr) { 
    	// cout << x << ", ";
    	for (auto y : x) {
    		// cout << y;
    	}
    	// cout << " ";
    }

    // cin >> s;

    // this gets the entire line works fine
    

    // while (getline(cin, s, ' ')) {
    // 	cout << s
    // }
    // cout << s;

	// string b;
	// getline >> b
	

	// string sr = "a1b2 c3d4 e5f6";
	// cout << "GG";

	return 0;
}