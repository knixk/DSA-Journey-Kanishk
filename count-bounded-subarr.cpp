#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int>& nums, int minK, int maxK) {
    long res=0;
    int start=0,minstart=0,maxstart=0;
    bool minf=false,maxf=false;
    for(int i=0;i<nums.size();i++){
        int num=nums[i];
        if(num<minK || num>maxK){
            minf=false;
            maxf=false;   
            start=i+1;
        }
        if(num==minK){
            minf=true;
            minstart=i;
        }
        if(num==maxK){
            maxf=true;

            maxstart=i;
        }
        if(minf && maxf){
            res+=(min(minstart,maxstart)-start+1);
        }
    }
    return res;
}	
/*
long long countSubarrays(vector<int> & nums, int minK, int maxK) {
	// some logic here
	// res += min(minI, maxI) - start + 1;
	int n = nums.size();

	for (int i = 0; i < n; i++) {

	}	
}
*/

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int n, minK, maxK; cin >> n >> minK >> maxK;
	vector<int> nums(n, -1);

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}

	long long ans = countSubarrays(nums);
	cout << ans;

	

}



// for (auto x : nums) {
// 	cout << x << " ";
// }