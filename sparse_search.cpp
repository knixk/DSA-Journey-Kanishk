#include <bits/stdc++.h>
using namespace std;

// perform a binary search over list of words and some empty words

// int sparse_search(string arr[], int n, string w) {
// 	int s = 0, e = n - 1, m = (s + e) / 2;

// 	while (s <= e) {
// 		if (arr[m] == w) {
// 			return m;
// 		}

// 		if (arr[m] == "") {
// 			int midLeft = m - 1, midRight = m + 1;
				
// 		}


// 	}
// }

int sparse_search(string a[],int n,string key){
    
    // sparse search
    int s=0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        int mid_left = mid - 1;
        int mid_right = mid + 1;
        if(a[mid]==""){
            while(1){
                if(mid_left<s and mid_right>e){
                    return -1;
                }
                else if(mid_right<=e and a[mid_right]!=""){
                    mid = mid_right;
                    break;
                }
                else if(mid_left>=s and a[mid_left]!=""){
                    mid = mid_left;
                    break;
                }
                mid_left--;
                mid_right++;
            }
        }
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}


int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	string arr[] = {"cat", "dog", "", "", "rat", "mat", "doggy", "", "", "", "pizza", "duck"};
	int n = 12;
	string w;
	cin >> w;
	// string w = "dog";

	int ans = sparse_search(arr, n, w);

	cout << ans;

}


/* 
while (i >= s && arr[i] == "" || j <= e && arr[j] == "") {

			}

*/