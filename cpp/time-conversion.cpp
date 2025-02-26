#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */


/* 
q. 12:01:00AM

-> 00:01:00

q. 01:00:00PM
+1 from 0

-> 13:00:00

q. 06:00:00PM
+6 from 12, basically
-> 18:00:00

if the hour is greater than 12 and has PM, than we say show by
adding that number to it

if it's 12, simply call it as 0,

if it's less than 12, 
but it has AM, then simply call it that,





*/

string timeConversion(string s) {
    string s;
    string t;
    getline(cin, s, t);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
