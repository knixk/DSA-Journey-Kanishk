#include <bits/stdc++.h>
using namespace std;

string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void phoneKeypad(string input, string output, int i) {

	// base case

	if (input[i] == '\0') {
		cout << output << "\n";
		return;
	}

	if (input[i] == '0' or input[i] == '1') {
		return;
	}

	// recursive case

	int currentNum = input[i] - '0';

	int n = keypad[currentNum].size();

	for (int j = 0; j < n; j++) {
		phoneKeypad(input, output + keypad[currentNum][j], i + 1);
	}

	return;

}

int main() {



	string input; cin >> input;

	string output;

	int i = 0;

	phoneKeypad(input, output, i);

	return 0;
}
