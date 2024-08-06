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

void quicksort(vector<int> & a, int s, int e) {

	if (s >= e)
		return;

	int p = partition(a, s, e);
	quicksort(a, s, p - 1);
	quicksort(a, p + 1, e);
}

int main(){

	vector<int> myvect;
	int N = 9999999;

	for (int i = N; i > 0; i--) {
		myvect.push_back(i);
	}

    vector<int> arr{10,5,2,0,7,6,4};
    cout<< arr.size() <<endl;
    // int n = arr.size();

    quicksort(myvect,0,N-1);

    for(int x :myvect){
    	cout << x << " ";
    }

    // cout << myvect[0]

    return 0;
}

// good job

