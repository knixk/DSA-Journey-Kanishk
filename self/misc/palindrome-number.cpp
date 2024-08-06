#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    deque<int> dq;

    if (x < 0) {
        return false;
    }

    while (x) {
        int val = x % 10;
        x = x / 10;

        dq.push_front(val);
    }

    for (int i = 0; i < dq.size(); i++) {
        cout << dq[i] << " ";
    }

    int i = 0, j = dq.size() - 1;

    while (i < j) {

        if (dq[i] != dq[j]) {
            return false;
        }

        i++;
        j--;

    }

    return true;

}


int main() {
    
    int num; cin >> num;
    
    bool ans = isPalindrome(num);
    
    if (ans) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}

/* 

I was like have to learn coding and I learned it. But I didn't knew i have to know a skill.
Now I need to make a skill. I love doing python So I can do it too.
I can do various things. I must take note for all

*/
