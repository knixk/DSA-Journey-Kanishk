#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    int m = flowerbed.size();

    bool ans = false;

    for (int i = 0; i < m; i++) {

        if (flowerbed[i] == 1) {
            continue;
        }

        if (m > 1) {

            if (i == 0) {
                
                int next = flowerbed[i + 1];

                if (!next) {
                    // planting the flower
                    flowerbed[i]++;
                    n--;
                }

            } else if (i == m - 1) {
            
                int prev = flowerbed[i - 1];

                if (!prev) {
                    flowerbed[i]++;
                    n--;
                }

            } else {

                int next = flowerbed[i + 1];
                int prev = flowerbed[i - 1];

                if (prev == 0 and next == 0) {
                    flowerbed[i]++;

                    n--;
                }
            }
        }

        if (m == 1) {

            if (!flowerbed[0]) {
                flowerbed[i]++;
                n--;

            }
        }
    }

    if (n <= 0) {
        // if no flowers left to plant, yes we can
        ans = true;
    }       

    // for (auto x : flowerbed) {
    //     cout << x << " ";
    // }

    return ans;

}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    int n, m; cin >> n >> m; 

    vector<int> arr;

    for (int i = 0; i < n; i++) {

        int temp; cin >> temp;

        arr.push_back(temp);

    }


    bool ans = canPlaceFlowers(arr, m);

    if (ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }

}





// leetcode editorial

/*

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            // Check if the current plot is empty.
            if (flowerbed[i] == 0) {
                // Check if the left and right plots are empty.
                bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                
                // If both plots are empty, we can plant a flower here.
                if (emptyLeftPlot && emptyRightPlot) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count >= n;
    }
};

*/