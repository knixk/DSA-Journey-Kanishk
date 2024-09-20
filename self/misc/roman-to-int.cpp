class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> myMap;
        myMap["I"] = 1;
        myMap["IV"] = 4;
        myMap["V"] = 5;
        myMap["IX"] = 9;
        myMap["X"] = 10;
        myMap["XL"] = 40;
        myMap["L"] = 50;
        myMap["XC"] = 90;
        myMap["C"] = 100;
        myMap["CD"] = 400;
        myMap["D"] = 500;
        myMap["CM"] = 900;
        myMap["M"] = 1000;
        
        int i = 0, j = 0;
        int n = s.length() - 1;
        int sum = 0;

        while (i <= n && j <= n) {

            if (myMap.find(s[i])) {
                // sum += myMap[s[i]]
            }

        }

    }
};