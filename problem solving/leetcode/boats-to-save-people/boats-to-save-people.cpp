/*
the questions basically wants us to minimize the number of boats we may need
to sovle this problem..


best case will be:
2 people get in one boat,

worst case would be basically,
the number of people in the arr


now that we've got an intuition let's try to solve this problem...

so haev two pointers one on left and one on right..



*/

// diff medium
// link: https://leetcode.com/problems/boats-to-save-people/

class Solution {
    public:
        int numRescueBoats(vector<int>& people, int limit) {
            int n = people.size(); // size of the arr

            sort(people.begin(), people.end()); // sorting the arr

            int light = 0; int heavy = n - 1;
            int boats = 0;

            // let's try to solve it, then we'll fix this code alr?

            while (light <= heavy) {

                if (light == heavy) {
                    boats++;
                    break;
                }
                // let's say if left + right is within the limit, inc and decre both, as we done it and increment boats

                // if we can do it,, what should we do?still inc boats and dec heavy? righT????
                // because we couldn't find a proper match for it,
                // at the end we may be left with one ele...
                /*
                */

                if (people[light] + people[heavy] <= limit) {
                    // we can take both, and inc our boat coutner
                    boats++;
                    light++; 
                    heavy--;
                } else {
                    // otherwise the boats must have been greater than right?
                    // if less or eq, above loop will take care..
                    boats++;
                    heavy--;
                    // but don't increment light, as a match is yet to be found..
                }


            }


            return boats;


        }
    };

/* 
LISTEN CAREFULLY:

*/