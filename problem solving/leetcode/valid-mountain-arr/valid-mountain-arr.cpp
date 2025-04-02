/*
so basically we're given this problem and we have to find if there is 
a valid mountain arr in this ...

mountain arr is 

if it has a increasing followed by a decreasing order

0 1 2 3 1 0

is this a mountain arr?
YES
how?
it has 0 1 2 3 as inc and
1 0 as dec



if the length is less than 3, it can never be a mountain arr


*/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();

        int i = 0;
        // int cur = arr[i];
        // int cur = arr[i];

        while (arr[i] < arr[i + 1]) {
            // we can go ahead
        }

        while (arr[])
    }
};