#include <bits/stdc++.h>
using namespace std;

// How many bird can we fill in the nests?

bool canPlaceBirds(int B,int N,vector<int> nests,int sep){

	int birds = 1;
	int location = nests[0];

	for (int i = 1; i <= N - 1; i ++) {

		int current_location = nests[i];

		if (current_location - location >= sep) {

			birds++;
			location = current_location;

		}

		if (birds == B) {
			return true;
		}

	}

	return false;

}


/*
void angryBirds(vector<int> nests, int sep, int B) {
	
	what is the time pass we are doing. 
	We haven't created anything interesting
	Haven't won any competition.

	We feel like a loser. Our name is no where near those guys

	we haven't win any grants, scholarships or whatever.
	Just wasting our time like a bum.

}
*/


int main(){
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int B = 3;
	vector<int> nests{1,2,4,6,9};
	//sortingz
	sort(nests.begin(),nests.end());

	//Binary Search

	int s = 0, n = nests.size() - 1, ans = -1;

	int e = nests[n] - nests[0];

	while (s <= e) {

		int mid = (s + e) / 2;

		if (canPlaceBirds(B, n, nests, mid)) {
			// diverge			
			ans = mid;
			s = mid + 1;

		} else {
			// converge
			e = mid - 1;
		}

	}

	cout << ans << endl;

	return 0;
}

/* 

this wasn't even a hard problem. How did we used to complete those?

*/