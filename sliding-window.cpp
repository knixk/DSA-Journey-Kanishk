#include <bits/stdc++.h>
using namespace std;

void housing(int * arr, int n, int k) {

	int i = 0, j = 0, cs = 0;

	while (j < n) {

		// cout << "i reached here";

		// expand the window
		cs += arr[j];
		j++;

		// contract the wnidow
		while ((cs > k or cs < k) and i < n) {
			cs -= abs(arr[i]);
			i++;
		}

		// if found the 
		if (cs == k) {
			cout << i << " : " << j - 1 << endl;
		}
	}

}


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int plots[] = { -1 ,-3 ,1 ,-3 ,-4 ,1 ,3 ,2 ,1 ,1};
	int n = sizeof(plots) / sizeof(int);
	int k = -5;

	// what if you had negatives?

	housing(plots, n, k);

	return 0;

}

















#include <iostream>
using namespace std;


void housing(int *arr,int n,int k){

    int i=0;
    int j= 0;
    int cs = 0;

    while(j<n){

        //expand to right
        cs += arr[j];
        j++;

        //remove elements from the left till cs > sum and i<j
        while(cs > k and i<j){
            cs = cs - arr[i];
            i++;
        }

        //check if any given point 
        if(cs==k){
            //print that window
            cout<< i <<" - "<<j-1 <<endl;
        }

    }
    return;
}

int main() {

    //smallest window that contains the reqd sum
    // handle if you have negative integers in the arrays 

    int plots[] = { 1 ,3 ,2 ,1 ,4 ,1 ,3 ,2 ,1 ,1};
    int  n = sizeof(plots)/sizeof(int);
    int k = 8;

    housing(plots,n,k);


    return 0;
}