#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

/* 
Note: You can make as long notes, no one would care..
so..

1. basically we calculated the count of each p, n and z's

2. then we found the ratio.. of each by divided by length of arr

we were getting err, as 0, becz our n was an int, so the ans was also becoming an int, it seems,
so we divided by a float, made our n a float.

precision of float is around 7
after decimal

double is around 15 after decimal

use setprecision() method in junction with cout


*/

void plusMinus(vector<int> arr) {
    int negatives = 0; 
    int zeroes = 0;
    int positives = 0;
    float n = arr.size();
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positives++;
        } else if (arr[i] < 0) {
            negatives++;
        } else {
            zeroes++;
        }
    }
    
    float negativesRatio, zeroesRatio, positivesRatio;
    negativesRatio = negatives / n;
    positivesRatio = positives / n;
    zeroesRatio = zeroes / n;
    
    cout << positivesRatio << endl << negativesRatio << endl 
    << zeroesRatio << setprecision(5);
    
        
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
