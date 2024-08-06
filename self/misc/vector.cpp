#include <bits/stdc++.h>
using namespace std;

void printArr(vector <int> & arr) {
	for (auto x : arr) {
		cout << x << " ";
	}

	cout << endl;

	cout << "Capacity : " << arr.capacity() << endl;
	cout << "Size : " << arr.size();
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	vector <int> arr (10, 0);
	int n = arr.size();
	
	for (int i = 0; i < n; i++) {
		arr[i] = n - i;
	}

	printArr(arr);

	arr.push_back(0);

	//cout << arr.at(2);

	printArr(arr);


	//reverse(arr, arr + 10);

	//printArr(arr);


	return 0;

}