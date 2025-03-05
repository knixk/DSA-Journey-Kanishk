#include <iostream>
#include <string>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    // q.1 use all data types

    int num = 1;
    float num2 = 23.23;
    double num3 = 23.23232;
    char char2 = 'c';
    bool ans = false;
    string my_str = "hello it's me";

    bool ans3 = ans + char2;
    char ans4 = ans + char2;

    // cout << my_str + char2;


    cout << my_str - char2; 

    // cout << ans3 << " " << ans4;

    // int ans2 = num + num2;
    // float ans3 = num + num2;

    // float num5 = num2 + num3;
    // double num6 = num2 + num3;


    // cout << num6 << " " << num5;

    // cout << ans << " " << ans3;


    // cout << num << " " << num2 << " "  << num3 << " " << char2 << " " << ans;

	return 0;
}