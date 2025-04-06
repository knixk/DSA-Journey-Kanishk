class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            // Create an unordered_map to store each character and its last seen index.
            unordered_map<char, int> map;
            
            int n = s.size();
            // If the string is empty or has one character, just return its length.
            if (n <= 1)
                return n;
            
            // Initialize two pointers for the sliding window.
            int i = 0; // Left pointer (start of the window)
            int j = 0; // Right pointer (end of the window)
            
            // Variable to store the length of the longest substring found.
            int longestWord = 0;
            
            // Loop until the right pointer reaches the end of the string.
            while (j < n) {
                // Current character at index j.
                char currentChar = s[j];
                
                // Check if the current character is already in the map
                // and if its last seen index is within the current window.
                if (map.find(currentChar) != map.end() && map[currentChar] >= i) {
                    // If yes, move the left pointer i to one position right after
                    // the last occurrence of the current character.
                    i = map[currentChar] + 1;
                }
                
                // Update the map with the current character's latest index.
                map[currentChar] = j;
                
                // Calculate the current window size.
                int currentSize = j - i + 1; // +1 because i and j are inclusive
                
                // Update the longestWord if the current window is larger.
                longestWord = max(longestWord, currentSize);
                
                // Move the right pointer to continue exploring the string.
                j++;
            }
            
            // Return the length of the longest substring without repeating characters.
            return longestWord;
        }
    };
    