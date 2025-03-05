#include <bits/stdc++.h>
using namespace std;


bool isValid(string s) {

    
    stack <char> my_stack;

    for (char my_char : s) {
        if (my_char == '[' or my_char == '{' or my_char == '(') {
            my_stack.push(my_char);
        } 

        if (my_char == ']' or my_char == '}' or my_char == ')') {
            if (my_stack.top() == my_char) {
                my_stack.pop();
            }
        } 
    }

    if (my_stack.empty()) {
        return true;
    }

    return false;

}

int main() {
    string s = "()";
    bool ans = isValid(s);
    cout << ans;

    return 0;
}
