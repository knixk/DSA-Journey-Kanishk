#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

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
