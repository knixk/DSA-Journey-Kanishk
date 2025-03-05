
	#include <iostream>
	using namespace std;

	/*
	NOTE: damn it seems like i've gotten stuck even here.. jeez

	a prime is basically has factors,
	only 
	1 and the number itself,


	2 is a prime number,
	but two is not a composite number,
	which means it X doesnt has more than two factors..

	 */

	bool checkPrime(int n) {

		if (n <= 1) {
			return false;
		}

		// Check if a number is prime or not
		if (n == 2) {
			return true;
		}

		if (n % 2 == 0) {
			// if it's even, it's not prime
			return false;
		}

		for (int i = 2; i < n / 2; ++i) {
			for (int j = i; i < n / 2; ++j) {
				// check if there is a factor, except one
				if (i * j == n) {
					// there is a factor, so it can't be prime
					return false;
				} 
			}
		}

		return true;

		// time complexity O((N ^ 2) / 4), worst case
		// best case O (1);
		// N / 2 * N * 2

	};

	int main() {


	    #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout); 
	    #endif

		// Q. print all even numbers, then odd numbers, then prime within range of 100
		int N = 100;

		for (int i = 1; i <= N; i++) {

			if (checkPrime(i)) {
				cout << i << " is prime" << endl;
			}

			else if (i % 2 == 0) {
				// it's an even number
				cout << i << " is even" << endl;
			} else if (i % 2 == 1) {
				// it's an odd number
				cout << i << " is odd" << endl;
			} else {
				cout << i << " is a nice number" << endl;
			}
		}

		// cout << checkPrime(4);

		return 0;
	}