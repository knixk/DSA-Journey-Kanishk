


#include <bits/stdc++.h>
using namespace std;

template <typename T>

bool findInArr(vector<T> arr, T value) {

	for (auto x : arr) {

		if (x == value) {
			return true;
		}

	}

	return false;

}

void easyToPronounce(vector<string> stringArr) {

	vector<char> chArr = {'a', 'e', 'i', 'o', 'u'};

	for (auto x : stringArr) {

		int counter = 0, maxCount = -1;

		for (auto ch : x) {

			if (findInArr(chArr, char(tolower(ch)))) {

				counter = 0;

			} else {

				counter++;
			}

			maxCount = max(counter, maxCount);

		}

		if (maxCount >= 4) {

			cout << "NO";

			// cout << x << ": Not Easy";


		} else {

			// cout << x << ": Easy";

			cout << "YES";

		}

		cout << "\n";
	}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int t; cin >> t;

	vector<string> stringArr;

	while (t--) {

		int n; cin >> n;
		string word; cin >> word;
		stringArr.push_back(word);

	}

	/*
	for (auto x : stringArr) {
		cout << x << endl;
	}
	*/

	easyToPronounce(stringArr);

}

// To do : Figure out time complexity

/*
basically this problem, asks if the current string has more than 4 vowels, it's not a easy to prnounce word
otherwise it is 
*/