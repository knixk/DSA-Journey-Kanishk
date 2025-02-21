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
    
        Professor(int id) {
            cur_id = id;
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
    
        Student(int id = 0) {
            cur_id = id;
        }
        
        void getdata() {
            cin >> name;
            cin >> age;
            for (int i = 0; i < 6; i++) {
                int num; cin >> num;
                marks.push_back(num);
            }
        }

        int getSum() {
            int n = marks.size();
            for (int i = 0; i < n; ++i) {
                sum += marks[i];
            }

            return sum;
        }
        
        void putdata() {
            cout << name << " " << age << " " << getSum() << " " << cur_id << endl;
        }
};


int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    int t;

    cin >> t;
    
    int s_id = 0; int p_id = 0;

    while (t--) {
        int id; cin >> id;

        if (id == 1) {
            p_id += 1;
            Professor p(p_id);
            p.getdata();
            p.putdata();
        } else {
            s_id += 1;
            Student s(s_id);
            s.getdata();
            s.putdata();
        }
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
