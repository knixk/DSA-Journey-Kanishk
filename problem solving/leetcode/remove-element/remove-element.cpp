

// problem link: https://leetcode.com/problems/remove-element/description/

// making a note is really crucial, as u will forget what u learn
// like a leaky bucket,
/* 
it never fills truly

aage path, piche sapaat
*/

/* 
basically in this problem we want to remove a particular element, all the occurences of it from the arr,
it seems like we want to make changes on the arr given...

certainly we can do that..
but let's try to create a temp arr, make changes to it, then we can ummm..

make it as like that,, and ... we'll return the size of it

also we need to return only the size of final arr elements,
and make changse to the arr given (nums)


*/


/*
SUMMARY:
we had to remove some elements in the arr,
what we did, if the cur character was the one to remove,
we didn't push it back to the temp arr,

otherwise we did,

finally we get the size of new made arr,
and copy back the elemnts from temp to nums arr
*/


class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            vector<int> temp;

            for (int i = 0; i < nums.size(); i++) {
                int cur = nums[i];

                if (cur == val) {
                    continue;
                } else {
                    temp.push_back(cur);
                }
            }

            // now we should have all the elements in the temp arr;
            // now we just have to get the size of temp, and copy back all the elements to nums

            int ans = temp.size();

            for (int i = 0; i < ans; i++) {
                nums[i] = temp[i];
            }

            return ans;
        }
    };


// ok it passes the initial test cases,
// let's try to improve this..
// damn it works!!! perfect 

// took 10 mins to finish,

/*
time complexity:
worst case:
O(N);

space O (N);



*/