#include<bits/stdc++.h>
using namespace std;


bool lexicoCompare(string s1, string s2) {
	// returns descending order
	return s1 + s2 > s2 + s1;
}

string concatenate(vector<int> numbers){
    //complete this method and return the largest number you can form as a string
    int n = numbers.size();
	vector<string> output;

	for (auto x : numbers) {
		output.push_back(to_string(x));
	}

	sort(output.begin(), output.end(), lexicoCompare);




	string ans = "";
	for (int i = 0; i < n; i++) {
		ans += output[i];
	}
	// for (auto x : numbers) {
	// 	// x are strings
	// 	// cout << x;
	// }

	return ans;
}


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n;
	cin >> n;
	vector <int> arr(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	string ans = concatenate(arr);

	cout << ans;

	return 0;
}

