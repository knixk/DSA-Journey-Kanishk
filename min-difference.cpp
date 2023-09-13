#include <bits/stdc++.h>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){

    //Complete this method
    int n = a.size(); int m = b.size();
    pair<int, int> pair_of_int;

    int minDiff = INT_MAX;
    int currentDiff = 0;

    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < m; j++) {
    		currentDiff = abs(a[i] - b[j]);
    		if (currentDiff < minDiff) {
    			minDiff = currentDiff;
    			pair_of_int.first = a[i];
    			pair_of_int.second = b[j];
    		}
    	}
    }

    return pair_of_int;
}

int main() {

	vector<int> a = {23, 5, 10, 17, 30};
	vector<int> b = {26, 134, 135, 14, 19};

	auto ansPair = minDifference(a, b);
	int x = ansPair.first, y = ansPair.second;
	cout << x << " " << y << endl;

	return 0;
}