#include <bits/stdc++.h>
using namespace std;

float square_root(int N,int P){

	// Root of N upto p places
   
   // binary search for int part.

	int s = 0,          e = N, 

	sqr = -1;			float ans;
	

	while (s <= e) {

		int mid = (s + e) / 2;

		sqr = mid * mid;

		if (sqr == N) {

			ans = mid;

		} else if (sqr > N) {

			e = mid - 1;

		} else {

			ans = mid;

			s = mid + 1;

		}

	}

	// return ans;

	// then find the floating part shouldn't be a problem

	float inc = 0.1;

	for (int place = 1; place <= P; place++) {

		while ( ans * ans <= N) {

			ans += inc;

		}

		ans -= inc;

		inc = inc / 10.0;

	}	

	return ans;
}



int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n,p;
	cin>>n>>p;

	cout<<square_root(n,p)<<endl;

	return 0;
}

/* 



*/