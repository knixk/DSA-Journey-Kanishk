#include<bits/stdc++.h>
using namespace std;

pair<int,int> search(int m, int n, vector<vector<int>> v, int k){
    // perform search on a 2d matrix 
	int i = m - 1, j = 0;

	while (i >= 0 && j < n) {
		int curr = v[i][j];
		if (curr == k) {
			break;
		} else if (curr > k) {
			i--;
		} else {
			j++;
		}
	}

	pair<int,int> p={i,j};
	return p;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int m, n, k; 
	cin >> m >> n >> k;

	vector<vector<int>> vec( m , vector<int> (n)); 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> vec[i][j];
			// cout << vec[i][j] << " ";
		}
		// cout << "\n";
	}

	pair<int,int> intPair = search(m, n, vec, k);

	cout << intPair.first << " " << intPair.second;

	return 0;
}

	

	
