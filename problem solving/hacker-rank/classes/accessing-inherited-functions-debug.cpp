#include <bits/stdc++.h>
using namespace std;


/*

NOTE2:

Basically im trying to find three factors which would sum upto a number N,
incrementing the count of each a, b, c, which is 2, 3, 5s..



if 180: 2 x 2 x 3 x 3 x 5


 */


void recursive_find(int goal, int cur, int a, int b, int c, char inc, int & depth) {
        depth++;
 	if (cur == goal) {
 		// cout << "ans found \n";
        // do some changes here  
        cout << a << " " << b << " " << c;
 		return;
 	}

    // Make changes
    // if (cur == 0) {
    //     switch (inc) {
    //         case 'a':
    //             cur = 2;
    //             a++;
    //             break;
    //         case 'b':
    //             cur = 3;
    //             b++;
    //             break;
    //         case 'c':
    //             cur = 5;
    //             c++;
    //             break;
    //         default:
    //             break;
    //     }
    // } else {
    //     switch (inc) {
    //         case 'a':
    //             cur *= 2;
    //             a++;
    //             break;
    //         case 'b':
    //             cur *= 3;
    //             b++;
    //             break;
    //         case 'c':
    //             cur *= 5;
    //             c++;
    //             break;
    //         default:
    //             break;
    //     }
    // }

 	recursive_find(goal, cur, a + 1, b, c, 'a', depth);

    // if (goal == cur) {
    //     return;
    // }

 	recursive_find(goal, cur, a, b + 1, c, 'b', depth);

    // if (goal == cur) {
    //     return;
    // }
 	recursive_find(goal, cur, a, b, c + 1, 'c', depth);

 }

 int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    int current = 0;
    int twos = 0, threes = 0, fives = 0;
    char inc = 'n';
    int N = 180;
    int depth = 0;
    // suppose new_val is 180
    recursive_find(N, current, twos, threes, fives, inc, depth);

    cout << depth;


    return 0;
 }