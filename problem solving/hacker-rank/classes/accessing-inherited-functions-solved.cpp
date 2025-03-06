#include <iostream>
using namespace std;


/*

LOGIC:

🔑 Logic in Simple Steps

1. Start with val = 1.
2. You want to turn val into new_val using only factors 2, 3, 5.
3. Check how many times new_val can be divided by 2, 3, 5.
4. For each division, call the corresponding func() (A for 2, B for 3, C for 5).
5. Each func() multiplies val and tracks how many times it was called.
6. When val equals new_val, you're done.


Unless u solve hard problems, by yorself.. fully understand it...
you can never learn problem solving.



 */

// Base class A - Multiplies by 2
class A {
public:
    A() { callA = 0; }
private:
    int callA;
    void inc() { callA++; }  // Increment call counter
protected:
    void func(int &a) {
        a *= 2;
        inc();
    }
public:
    int getA() { return callA; }  // Access call count
};

// Base class B - Multiplies by 3
class B {
public:
    B() { callB = 0; }
private:
    int callB;
    void inc() { callB++; }
protected:
    void func(int &a) {
        a *= 3;
        inc();
    }
public:
    int getB() { return callB; }
};

// Base class C - Multiplies by 5
class C {
public:
    C() { callC = 0; }
private:
    int callC;
    void inc() { callC++; }
protected:
    void func(int &a) {
        a *= 5;
        inc();
    }
public:
    int getC() { return callC; }
};

// Class D inherits from A, B, C
class D : public A, public B, public C {
    int val;

public:
    D() { val = 1; }  // Initial value is 1

    // Function to update val to new_val using A, B, C functions
    void update_val(int new_val) {
        // While val is smaller than target
        while (val < new_val) {
            if (new_val % val == 0) {  // Check if multiplication is possible
                if ((new_val / val) % 2 == 0) {
                    A::func(val);  // Use A's func to multiply by 2
                } else if ((new_val / val) % 3 == 0) {
                    B::func(val);  // Use B's func to multiply by 3
                } else if ((new_val / val) % 5 == 0) {
                    C::func(val);  // Use C's func to multiply by 5
                } else {
                    break;  // Impossible case (non-2,3,5 factors)
                }
            } else {
                break;  // Impossible to match new_val
            }
        }
    }

    // Provided check function to print result
    void check(int new_val) {
        update_val(new_val);
        cout << "Value = " << val << endl;
        cout << "A's func called " << getA() << " times" << endl;
        cout << "B's func called " << getB() << " times" << endl;
        cout << "C's func called " << getC() << " times" << endl;
    }
};

int main() {
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
    return 0;
}
