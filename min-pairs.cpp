#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

void min_pair(vector<int> a1,vector<int> a2){

	// sort any one arr
	sort(a2.begin(), a2.end());

	int p1, p2, diff = INT_MAX;

	for (int x : a1) {

		long unsigned int lb = lower_bound(a2.begin(), a2.end(), x) - a2.begin();

		// int tempDiff = lb >= 1 ? x - a2[lb - 1] : INT_MAX;

		// lb - 1
		// left 

		if (lb >= 1 and x - a2[lb - 1] < diff) {

			diff = x - a2[lb - 1];
			p1 = x;
			p2 = a2[lb - 1];

		}

		// right
		// if you find a greater or equal element for lb

		if (lb != a2.size() and a2[lb] - x < diff) {
			
			// note: a2 at [lb] is greater than lb - 1

			diff = a2[lb] - x;
			p1 = a2[lb];
			p2 = x;
		}

	}

	cout << "P1 : " << p1 << " P2 : " << p2 << endl;

}


int  main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif


	vector<int> a1 = {-1, 5, 10, 20, 3};
	vector<int> a2 = {26, 134, 135, 15, 17};
	min_pair(a1,a2);


	return 0;
}


/* 

Will you stop watching this if u found her?
I just wanted her?

I just wanted him. Why can't I find him? Will anyone 

*/