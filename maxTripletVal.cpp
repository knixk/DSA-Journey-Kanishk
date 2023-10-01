// has some bugs

// class Solution {
// public:

//     long long solveTriplets(vector<int> nums, int n, int i, int ans) {

//         if (i == n) {
//             return 
//         }

//     }

//     long long maximumTripletValue(vector<int>& nums) {
            
//         if (n )
//         int ans = (a - b) * c;

//         if (ans) {
//             return (long long)ans;
//         }

//         return (long long)0;

//     }
// };




class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        int n = nums.size(), a, b, c;

        int i;

        for ( ; i <= n - 3; i++) {

            if (nums[i] > a) {
                a = nums[i];
            }
        }

        for (; i <= n - 2; i++) {

            if (nums[i] < b) {
                b = nums[i];
            }

        }

        for (; i <= n - 1 ; i++) {

            if (nums[i] > c) {
                c = nums[i];
            }

        }

        int ans = (a - b) * c;

        if (ans) {
            return (long long)ans;
        }

        return (long long)0;

    }
};
