#include <iostream>
using namespace std;


/* 
NOTE:

*/

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // Q. read a line split by spaces print each token
    string s;
    getline(cin, s);

    string temp;

    stringstream ss(s, temp, ' ');


    cout << ss;
	// works




	return 0;
}