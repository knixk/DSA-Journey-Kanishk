#include <bits/stdc++.h>
using namespace std;

bool divideAmongK(int arr[],int n,int k,int limit){
    //return true if every partition gets atleast limit no of coins
    int partition = 0;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {

        if (current_sum + arr[i] >= limit) {
            // increment parition
            // set cs to 0

            partition++;
            current_sum = 0;

        } else {
            current_sum += arr[i];
        }

    }

    // is it possible to do k partitions?

    //
    return partition >= k; 


}

int k_partition(int arr[],int n,int k){
   
   int s = 0, e = 0, ans = -1;

   for (int i = 0; i < n; i++) {
    e += arr[i];
   }

   while (s <= e) {

    int mid = (s + e) / 2;

    if (divideAmongK(arr, n, k, mid)) {
        // go right
        ans = mid;
        s = mid + 1;

    } else {
        // go left
        e = mid - 1;
    }

   }

   return ans;
 

}
int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    
    int a[] = {1,2,3,4};
    int n  = sizeof(a)/sizeof(int);
    int k = 3; // we wanna do k partitions
    cout<< k_partition(a,n,k)<<endl;

    // ans is the last index where we created a partition 
    
    // what is the maximum answer for you! which is the minimum
    return 0;
}

