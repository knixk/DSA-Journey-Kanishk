#include <bits/stdc++.h>
using namespace std;

int countOdds(int low, int high) {
    int count = 0;
    for (int i = low; i <= high; i++) {
        // defs an odd
    	cout << "first " << i << " ";

    	bool check = false;

    	if (check) {
            ++count;
        	++i;
        	continue;
    	}

        if (i & 1) {
            cout << "second: " << i << ",  ";
        	check = true;
        	++count;
        	++i;
        }
    }

    return count;
}

/*

pair <char, char> solve(char first_bit, char second_bit) {

	pair <char, char> ans;
	// first is carry, second is sum

	
	if (first_bit == '0' && second_bit == '0') {
		pair.first = '0';
		pair.second = '0';
	} else if (first_bit == '1' && second_bit == '1') {
		pair.first = '1';
		pair.second = '0';
	} else {
		pair.first = '0';
		pair.second = '1';
	}

	return sum;
}

/*
string addBinary(string a, string b) {

	string ans = "";
    
	int n = a.length(), m = b.length();

	while (n - 1 >= 0 && m - 1 >= 0) {
		int last_n = a[n - 1], last_m = a[m - 1];


	}

}		
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int len_a = a.length(), len_b = b.length();
        int carry = 0, i = 0;
        string s = "";

        while (i < len_a || i < len_b || carry != 0) {
        	int x = 0, y = 0;

        	if (i < len_a && a[len_a - i - 1] == '1') {
        		x = 1;
        	}

        	if (i < len_b && b[len_b - i - 1] == '1') {
        		y = 1;
        	}

        	int calc = (x + y + carry) % 2;
        	string ans = to_string(calc);
        	carry = (x + y + carry) / 2;
        	s = ans + s;
        	i++;
        }
        return s;
    }
}; 


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	// int low, high;
	// cin >> low >> high;
	// cout << countOdds(low, high) << "\n";

	//add binary
	string a = "11", b = "1";
	cout << addBinary(a, b);



}