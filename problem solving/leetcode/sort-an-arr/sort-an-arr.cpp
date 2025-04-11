class Solution
{
public:
    // merge in this one
    void merge(int s, int e, vector<int> &arr)
    {
        // find the mid again?
        int mid = (s + e) / 2;

        int i = s;
        int j = mid + 1;

        vector<int> temp;

        while (i <= mid && j <= e) {
            // stitch the elems
            if (arr[j] > arr[i]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        /*
        now it may happens, i exhaused before j or vice versa..
        so in t
        */

        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
            
        }

        while (j <= e) {
            temp.push_back(arr[j]);
            j++;
        }


        /*
        now we need to copy back the elems from the temp arr to og arr alr?
        */

        int k = 0;

        for (int i = s; i <= e; i++) {
            arr[i] = temp[k];
            k++;
        }

        // this should copy it back
        return;

        /*
        q. will this work? one way to find out..
        everything has been done right tho...
        */
    }

    // main method, to make recurring calls
    void mergeSort(int s, int e, vector<int> &arr)
    {

        // where's the base case bruh?
        if (s >= e) {
            return; //q. why is it eq to e? won't it cause issue if less than e?
        }

        int mid = (s + e) / 2; // how will this find the perfect mid?
        int j = mid + 1;

        // make the right rec call
        mergeSort(s, mid, arr);

        // make the right call
        mergeSort(j, e, arr);

        // finally merge when these calls  return
        return merge(s, e, arr); // is this good? think so

    }

    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int mid = (s + e) / 2; // how will this find the perfect mid?

        // make the first rec call
        mergeSort(s, e, nums);

        /*
        since it has been transformed, we can return this arr
        */
        return nums;
    }
};

/*
Got a tle why?

ok


5 2 4 1 3 4

5 2 4   |   1 3 4

5    2 4   |   1       3 4

5     2  4  |   1      3  4

5     2  4  |   1       34


2 4 5   |    1 3 4

1 2 3 4 4 5

something like this..
*/