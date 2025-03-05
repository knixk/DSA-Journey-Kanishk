	#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    int age; 
    cin >> age;

    if (age >= 18) cout << "you may pass";
    else cout << "can't";

	return 0;
}