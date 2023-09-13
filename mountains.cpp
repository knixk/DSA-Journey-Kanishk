class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int largest = 0;

        for (int i = 1; i <= n - 2; i++) {
            if (arr[i] > arr[i + 1] and arr[i] > arr[i - 1]) {
                int cnt = 1;
                int j = i; int k = i;
                int l = n - 2;

                // going backwards
                while (j >= 1 and arr[j - 1] < arr[j]) {
                    j--;
                    cnt++;
                }

                // going forwards
                while (k <= l and arr[k + 1] < arr[k]) {
                    cnt++;
                    k++;
                }

                largest = max(largest, cnt);
            }
        }

        return largest;

    }
};