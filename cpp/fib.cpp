#include <iostream>
#include <vector>
using namespace std;


void generateFib(vector <int> & arr, int k, int i) {
	int n = arr.size();

	if (n == k) {
		return;
	}

	// when the arr is empty
	if (n == 0) {

		if (k == 0) {
			arr.push_back(-1);
			return;
		}

		arr.push_back(0);


		if (k == 1) {
			return;
		} 

		arr.push_back(1);

		if (k == 2) {
			return;
		} 

		++i;

	}

	arr.push_back(arr[i] + arr[i - 1]);

	generateFib(arr, k, i + 1);

}

int  main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

	// can you do k fib nums using recursion?

	vector <int> fib;
	int k =  0;
	int i = 0;


	generateFib(fib, k, i);

	for (auto x : fib) {
		cout << x << endl;
	}

	// cout << "X";

	return 0;
}