
#include <iostream>
using namespace std;

/*
NOTE: damn it seems like i've gotten stuck even here.. jeez

 */

bool checkPrime(int n) {

	if (n <= 1) {
		return false;
	}

	// Check if a number is prime or not
	if (n == 2) {
		return true;
	}

	for (int i = 3; i < N / 2; ++i) {
		for (int j = i)
	}

}

int main() {


    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

	// Q. print all even numbers, then odd numbers, then prime within range of 100
	int N = 100;

	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			// it's an even number
			cout << i << "is even" << endl;
		} else if (i % 2 == 1) {
			// it's an odd number
			cout << i << "is odd" << endl;
		}
	}

	return 0;
}