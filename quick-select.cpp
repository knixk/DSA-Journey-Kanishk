#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> & a, int s, int e) {

	int i = s - 1, pivotIdx = e, j;

	for (j = s; j < pivotIdx; j++) {
		if (a[j] < a[pivotIdx]) {
			// we need to do some swaps
		swap(a[++i], a[j]);

		}
	}

	swap(a[++i], a[pivotIdx]);
	return i;

}

int quickselect(vector<int> & a, int s, int e, int k) {

	int p = partition(a, s, e);

	if (k == p) {
		return a[k];
	}
	else if (k > p) {
		return quickselect(a, p + 1, e, k);
	} else  {
		return quickselect(a, s, p - 1, k);
	}

}


int main(){
	
    vector<int> arr{10,5,2,0,7,6,4};
    int n = arr.size(), k = 4;

    cout << quickselect(arr,0,n-1, k - 1);

    return 0;
}

// good job

