#include <iostream>
#include <vector>
using namespace std;


void generateFib(vector <int> & arr, int k, int i) {
	int n = arr.size();
	if (n == 0) {
		arr.push_back(0);
		arr.push_back(1);
		++i;
	}

	if (n == k) {
		return;
	}

	arr.push_back(arr[i] + arr[i - 1]);

	generateFib(arr, k, i + 1);

}

int  main() {

	// can you do k fib nums using recursion?

	vector <int> fib;
	int k =  10;
	int i = 0;


	generateFib(fib, k, i);






	return 0;
}