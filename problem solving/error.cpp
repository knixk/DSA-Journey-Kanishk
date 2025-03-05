#include <iostream>

using namespace std;

// template <typename T>

// void gamer() {
// 	return;
// }

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

	int gamer; cin >> gamer;

	try {

		if (gamer) {
			cout << "perf";
		} else {
			throw(gamer);
		}

	}

	catch (int data) {
		cout << "Nuh nuh " << data;
	}

	return 0;
}