#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'fizzBuzz' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

/*
n % 3 == 0 means what?
basically it means,
when i divide a number by 3,

that is 

3 ) N ( Quotient
    ...
   -----
   remainder  < ------- (this is what we say)
    0, when this is zero, the condition is true.


one tricky case is that , the number 15 divides 3 fully and 5 fully,
so check for this case before checking others,
otherwise there is a wrong ans printed..
that's it
 */

void fizzBuzz(int n) {
   
    int i = 1; 
    while (i <= n) {

    if (i % 15 == 0) {
        cout << "FizzBuzz";
    }    
    else if (i % 3 == 0) {
        cout << "Fizz";
    } else if (i % 5 == 0) {
        cout << "Buzz";
    }  else {
        cout << i;
    }

    cout << "\n";

    i++;
    }

}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    fizzBuzz(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
