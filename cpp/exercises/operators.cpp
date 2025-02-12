#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    int n = 1;
    int b = 10;
    int c = -1;

    int ans = n - b;
    int ans2 = c - (-1);
    int ans3 = c - (b);
    int ans4 = c + b;
    int ans5 = c * c;
    int ans6 = b * c;
    int ans7 = b / c;
    int ans8 = c / c;

    // the values after . are neglected
    cout << 30 / 15 << endl;
    cout << 28 / 15 << endl;

    // cout << ans << endl << ans2 << endl << ans3 << endl << ans4 << ans5 << ans6 << ans7 << ans8;
	return 0;
}