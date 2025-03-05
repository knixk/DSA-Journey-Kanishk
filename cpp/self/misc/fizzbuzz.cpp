#include <bits/stdc++.h>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){

	vector<string> tempArr;

    for (int i = 1; i <= n; i++) {
    	if (i % 3 == 0) {
    		tempArr.push_back("Fizz");
    	} else if (i % 5 == 0) {
    		tempArr.push_back("Buzz");
    	} else if (i % 15 == 0) {
    		tempArr.push_back("FizzBuzz");
    	} else {
    		tempArr.push_back(to_string(i));
    	}
    }

    return tempArr;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n; cin >> n;
	vector<string> ansArr = fizzbuzz(n);

	for (auto x : ansArr) {
		cout << x << " ";
	}

	return 0;
}
