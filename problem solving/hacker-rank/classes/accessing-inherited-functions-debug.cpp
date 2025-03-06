#include <bits/stdc++.h>
using namespace std;

void recursive_find(int goal, int & cur, int & a, int & b, int & c, char inc) {
 	if (cur == goal) {
 		cout << "ans found \n";
        // do some changes here  
        cout << a << " " << b << " " << c;
 		return;
 	}

 	if (cur > goal) {
 		// we need to backtrack this..
        if (inc == 'a') {
            cur /= 2;
            a--;
        }

        if (inc == 'b') {
         cur /= 3;
            b--;   
        }

        if (inc == 'c') {
            cur /= 5;
            c--;
        }

 		return;
 	}

    if (cur == 0) {
        switch (inc) {
            case 'a':
                cur = 2;
                a++
                break;
            case 'b':
                cur = 3;
                b++;
                break;
            case 'c';
                cur = 5;
                c++;
                break;
            default:
                break;
        }
    } else {
        switch (inc) {
            case 'a':
                cur *= 2;
                a++;
                break;
            case 'b':
                cur *= 3;
                b++;
                break;
            case 'c';
                cur *= 5;
                c++;
                break;
            default:
                break;
        }
    }

 	recursive_find(goal, cur, a, b, c, 'a');

    // if (goal == cur) {
    //     return;
    // }

 	recursive_find(goal, cur, a, b, c, 'b');

    // if (goal == cur) {
    //     return;
    // }
 	recursive_find(goal, cur, a, b, c, 'c');

 }

 int main() {

    int current = 0;
    int twos = 0, threes = 0, fives = 0;
    char inc = 'n';
    int N = 180;
    // suppose new_val is 180
    recursive_find(N, current, twos, threes, fives, inc);


    return 0;
 }