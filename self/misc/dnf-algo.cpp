#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> & arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}
 
vector<int> sortBalls(vector<int> balls){
    //sort the balls in place in a single pass (O(N) time, O(1) space)
    int n = balls.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
    	if (balls[mid] == 0) {
    		swap(balls, low, mid);
    		low++; mid++;
    	} else if (balls[mid] == 1) {
    		 mid++;
    	} else {
    		swap(balls, mid, high);
    		high--;
    	}
    }
         
    return balls;
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	// perform dnf sort
	vector<int> balls = {0, 1, 2, 1, 1, 1, 0, 2, 0, 1, 0};

	vector<int> ans = sortBalls(balls);

	for (auto x : ans) {
		cout << x << " ";
	}

	return 0;
}
