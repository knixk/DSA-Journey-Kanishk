#include<iostream>
#include<vector>
using namespace std;

int rotated_search(vector<int> arr,int key) {

	int s = 0, e = arr.size() - 1;

	while (s <= e) {

		int mid = (s + e) / 2;

		if (arr[mid] == key) {
			return mid;
		}

		if (arr[s] <= arr[mid]) {

			if (key >= arr[s] and key <= arr[mid]) {

				e = mid - 1;

			} else {

				s = mid + 1;

			}

		} else {

			if (key >= arr[mid] and key <= arr[e]) {

				s = mid + 1;

			} else {

				e = mid - 1;

			}
		}

	}	

	return -1;

}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif
	
	vector<int> a{4,5,6,7,0,1,2,3};
	int key;
	cin>>key;
	cout<< rotated_search(a,key) <<endl;
	return 0;
}
