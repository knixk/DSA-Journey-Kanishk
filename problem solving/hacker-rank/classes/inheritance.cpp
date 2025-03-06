#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*
NOTE: making a note is very crucial to remember the context:

Public access identifiers, also known as access modifiers, specify how accessible a class, method, or variable is. 
ex: public, private, protected.

note 2:
basically we created a class of rectangle.

it has a width and a height,

for function read input, getwidth, getheight and display, which would print the height and width, simply...

Now,
we create a class of rectangleArea, which is basically extended from the rectangle class,
suprisingly when u call the display method, it's going to print the og, rectangle height,
even tho the variables weren't defined but they do exist somewhere in the memory..


 */

class Rectangle {
    public:
        int width, height;
        void read_input() {
            int w, h;
            cin >> w >> h;
            width = w;
            height = h;
        }
        

        int getWidth() {
            return width;
        }

        int getHeight() {
            return height;
        }

        void display() {
            cout << getWidth() << " " << getHeight() << endl;
        }

};

class RectangleArea : Rectangle {
    public:
    void display() {
        cout << getWidth() * getHeight() << endl;
    }
};  

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, m;
    cin >> n >> m;
    
    Rectangle r;
    RectangleArea ra;
    
    r.read_input();
    r.display();
    
    ra.read_input();
    ra.display();
    
    
    return 0;
}
