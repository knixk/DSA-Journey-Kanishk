#include <bits/stdc++.h>
using namespace std;


/*

NOTE2:

Basically im trying to find three factors which would sum upto a number N,
incrementing the count of each a, b, c, which is 2, 3, 5s..



if 180: 2 x 2 x 3 x 3 x 5

ok notice, we are not doing back tracking but it works!
why?
since we're only just sending it as a copy, 
when the function call returns, it automatically
makes it to the previous value..
then call the next function.

 */


void recursive_find(int goal, int cur, int a, int b, int c, char inc, int & depth) {
        depth++;
 	if (cur == goal) {
 		// cout << "ans found \n";
        // do some changes here  
        cout << a << ", " << b << ", " << c << endl;
 		return;
 	}

    if (cur > goal) {
        return;

    }

    // make three recursive calls
    recursive_find(goal, cur * 5, a, b, c + 1, 'c', depth);
    recursive_find(goal, cur * 3, a, b + 1, c, 'b', depth);
    recursive_find(goal, cur * 2, a + 1, b, c, 'a', depth);
 }

 int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    int current = 1;
    int twos = 0, threes = 0, fives = 0;
    char inc = 'n';
    int N = 180;
    int depth = 0;
    // suppose new_val is 180
    recursive_find(N, current, twos, threes, fives, inc, depth);

    // cout << depth;


    return 0;
 }