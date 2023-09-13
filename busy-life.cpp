#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> v1, pair<int,int> v2){
	// ascending order
    return v1.second < v2.second;
}

int countActivites(vector<pair<int,int>> v){
    //Complete this method
    
    sort(v.begin(),v.end(),compare);
    int count = 1;
    int finish = v[0].second;
    
    for(int i=1;i<v.size();i++){
        if(v[i].first>=finish){
            count++;
            finish = v[i].second;
        }
    }
    return count;
}



// #include <bits/stdc++.h>
// using namespace std;

// bool compare(pair<int, int> a, pair<int, int> b) {
// 	return a.second < b.second;
// }


// int countActivites(vector<pair<int,int>> activities){

// 	int n = activities.size();
// 	sort(activities.begin(), activities.end(), compare);	
// 	int max = INT_MIN;

// 	for (int i = 0; i < n - 1; i++) {

// 		int cycle = 1;

// 		auto currentNode = activities[i];
// 		auto nextNode = activities[1 + 1];

// 		int start_first = currentNode.first;
// 		int end_first = currentNode.second;

// 		int start_second = nextNode.first;
// 		int end_second = nextNode.second;

// 		for (int j = i + 1; j < n; j++) {
// 			if (j == n) {
// 				continue;
// 			}

// 			if ()
// 		}


// 		while (end_first < end_second) {
// 			cycle++;

// 		}
// 	}

// }