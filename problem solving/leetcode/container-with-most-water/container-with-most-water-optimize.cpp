
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

            int maxSoFar = INT_MIN;

            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    int area = min(height[i], height[j]) * (j - i);
                    maxSoFar = max(area, maxSoFar);
                }
            }
        return maxSoFar;

        }

    };

    /*
    ok it seesm like this approach worked,
    but it's giving a tle

    about the approach

    we loop from 0 to n 0 1, as we don't want i at the last idx,
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