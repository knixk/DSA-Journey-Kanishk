#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    private:
    
    public:
        string name; int age;
    
        Person() {
            
        }
        
   
};

class Professor : public Person {
    private:
    
    public:
        int publications; int cur_id;
    
        Professor() {
            
        }
        
        void getdata() {
            cin >> name;
            cin >> age;
            cin >> publications;
        }
        
        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
        
        
   
};

class Student : public Person {
    private:
    
    public:
        int cur_id; 
        int sum = 0;
        vector<int> marks;
    
        Professor() {
            
        }
        
        void getdata() {
            
        }
        
        void putdata() {
            
        }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
