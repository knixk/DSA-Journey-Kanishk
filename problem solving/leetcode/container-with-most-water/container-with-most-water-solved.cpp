class Solution {
    public:
        int maxArea(vector<int>& height) {
            // Get the size of the height array
            int n = height.size();
    
            // Initialize two pointers: one at the beginning (left) and one at the end (right)
            int left = 0, right = n - 1;
    
            // This will store the maximum area found so far. Initially, set it to 0.
            int maxSoFar = 0;
    
            // Continue the loop until the left pointer is less than the right pointer
            while (left < right) {
                // Calculate the current height. We take the minimum of the heights at the two pointers.
                int curHeight = min(height[left], height[right]);
    
                // Calculate the width between the two pointers (right - left)
                int width = right - left;
    
                // Now, calculate the area between these two points
                int area = curHeight * width;
    
                // Update the maximum area if the new area is larger than the current max
                maxSoFar = max(maxSoFar, area);
    
                // Now, decide which pointer to move:
                // If the height at the left pointer is smaller, move it to the right.
                // Otherwise, move the right pointer to the left.
                // This is because we want to maximize the area, and moving the taller pointer won't help.
                if (height[left] < height[right]) {
                    left++; // Move left pointer to the right
                } else {
                    right--; // Move right pointer to the left
                }
            }
    
            // After the loop ends, return the maximum area found
            return maxSoFar;
        }
    };
    