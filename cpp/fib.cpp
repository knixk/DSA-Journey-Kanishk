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

/*

NOTE: 
basically we want to generate k fib nums,
we're using recursion this time..

1. so what we do is pass the ans arr by ref, starting index i, and num of terms k
2. we have a base case where if the lenght of arr is k, simply return from that function call.
3. also in the very first stages, we say, if the length is upto 0, or 1, or 2, we push some values
4. otherwise we go in recursion, we say... ok dude, sum the last two nums and move index by one.
5. this would do it each time, and call the function generateFib(.., .., .. + 1);
when the size reaches k it will get back, and the arr will be built
this doesn't return any output btw.

 */

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