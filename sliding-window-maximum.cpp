#include <bits/stdc++.h>
using namespace std;


vector<int> maxInWindow(vector<int> input,int k){
    
	deque <int> dq;
	// <-- front    --> back

    int n = input.size();


	vector<int> ans(n, INT_MIN);
    

    int cs;
    int ms = INT_MIN;

    vector <int> ans;

    for (int i = 0; i < k; i++) {

    	cs = input[i];
    	ms = max(cs, ms);

    }
    
	dq.push_front(ms);

	ms = INT_MIN;

	for (int i = 1; i < n - k; i++) {

		cs = input[i];	


	}

}




#include<vector>
#include<deque>
using namespace std;

vector<int> maxInWindow(vector<int> a,int k){

    //Algorithm
    vector<int> output;
    int n = a.size();

    deque<int> Q(k);
    //1. Process only the first K elements
    int i;

    for(i=0;i<k;i++){
        //Logic here ...

        while(!Q.empty() && a[i] > a[Q.back()]){
            Q.pop_back();
        } 

        Q.push_back(i);

    }	

    //2. Remaining the elements of the array
    for( ;i<n;i++){
        //cout << a[Q.front()]<<" ";
        output.push_back(a[Q.front()]);
        
        //Remove element from the left (contraction when an index lies outside the current window)
        while(!Q.empty() and Q.front() <=i-k){
            Q.pop_front();
        }
        while(!Q.empty() && a[i] >= a[Q.back()]){
            Q.pop_back();
        }

        //always
        Q.push_back(i);
    }


    output.push_back(a[Q.front()]);
    return output;

}