
#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char arr[] = "hello, it'sme";
    char arr2[] = {'a', 'b', '\0'}; // correct way
    char arr3[] = {'a', 'b'};       // correct way

    cout << arr << endl;
    cout << arr2 << endl;
    cout << arr3 << endl; // not sure hwy the third is sum of all two? heh?
    return 0;
}