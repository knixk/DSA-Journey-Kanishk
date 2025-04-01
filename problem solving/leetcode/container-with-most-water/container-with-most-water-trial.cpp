
/*
LET'S TRY TO DO A BRUTE FORCE APPROACH,


we need to find all the areas and maintain a max right..

how can we do tihs?

loop between i and j for all the itesm

ex:


00, 01, 02, 03, 04,,

10, // how can this be one zero?


ok we got on approach, iterate over all vals of i and j i mean between them calc the area store the max, then
we'll think about optimizing this..

*/
class Solution {
    public:
        int maxArea(vector<int>& height) {

            int n = height.size();

            int left_to_right_max = INT_MIN;
            int ltr_idx = -1; // ltr is short for form left to right and rtl is opposite

            int right_to_left_max = INT_MIN;
            int rtl_idx = -1;


            for (int i = 0; i < n; i++) {
                int cur = height[i];
                // left_to_right_max = max(cur, left_to_right_max);
                if (cur > left_to_right_max) {
                    left_to_right_max = cur;
                    ltr_idx = i;
                }

            }

            for (int i = n - 1; i >= 0; i--) {
                int cur = height[i];
                // right_to_left_max = max(cur, right_to_left_max);
                if (cur > right_to_left_max) {
                    right_to_left_max = cur;
                    rtl_idx = i;
                }
            }

            int area = min(left_to_right_max, right_to_left_max) * (rtl_idx - ltr_idx);
            return area;


            /*
            im sure i have done this before,
            let's try to find the max for both towers
            */

        }

    };

    /*
    ok it seesm like this approach worked,
    but it's giving a tle

    about the approach

    we loop i from 0 to < n - 1, as we don't want i at the last idx,
    otherwise area would be abosultey 0,
    similarly,
    we don't want our j to be before i, as it won't make sense, prolly it will be overlapping some other solution,

    we take j to the last idx, as it's allowed,

    we calc the area which is height * width,
    height is the min of both chosen towers,
    and width is 
    second idx - first idx,
    as it gets the correct lenght of this..

    we store this in area,
    update the max


    after this for for loop ends, we return our ans
    */