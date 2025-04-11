#include <bits/stdc++.h>
using namespace std;

// can you implement merge sort?
void merge(vector<int> &arr, int s, int e) {
	// compare and merge within bounds
	int mid = (e + s) / 2, j = mid + 1, i = s;

	vector<int> temp;

	while (i <= mid && j <= e) {

		if (arr[i] > arr[j]) {
			temp.push_back(arr[j++]);
		} else {
			temp.push_back(arr[i++]);
		}
	}

	// copy back any remaning elements from first half if any
	while (i <= mid) {
		temp.push_back(arr[i++]);
	}

	// copy back any remaning elements from second half if any
	while (j <= e) {
		temp.push_back(arr[j++]);
	}

	// becz we don't know the exact index

	/*
	so what i can see is temp is a new arr,
	whereas arr is the original array

	we need to copy back the element from temp arr to orignial arr
	that's why we do this kind of setup,
	where we increase the k's index with respect to s and e (including of both..)
	*/
	int k = 0;
	for (int idx = s; idx <= e; idx++) {
		arr[idx] = temp[k++];
	}


	// is this return needed?
	return;
}


void mergeSort(vector<int> &arr, int s, int e) {

	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2, j = mid + 1;

	mergeSort(arr, s, mid);
	mergeSort(arr, j, e);


	// is thi return needed?
	return merge(arr, s, e);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector<int> arr = {2, 3, 1, 5, 6, 2, 7, 9};
	int s = 0, e = arr.size() - 1;

	mergeSort(arr, s, e);

	for (auto x : arr) {
		cout << x << " ";
	}

	return 0;
}

/*
explanation:

basically,
divide the arr by half

there will be two methods

one is merge sort (where the recurring calls will take plcae)
next will be merge,
where the merge will happen when it hits the base case, and returns from the subsequent calls


now give the first half to merge sort,
and then the second half to merge sort,

it will go in the left most tree in the recursion when left
call finishes it will take the right call..



*/

// works


/*
uc an never be confident unless u DIY
keep revising this else ull forget and fail in interview..
*/