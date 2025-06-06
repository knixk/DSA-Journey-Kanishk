


/*
NOTE:
problem link:
https://www.hackerrank.com/challenges/accessing-inherited-functions/problem?isFullScreen=true


NOTE2:
time started: 4:20pm

Basically im trying to find three factors which would sum upto a number N,
incrementing the count of each a, b, c, which is 2, 3, 5s..



if 180: 2 x 2 x 3 x 3 x 5


 */


#include <iostream>
#include <vector>

using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D 
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }

        void recursive_find(int goal, int cur, int a, int b, int c, char inc, vector <int> & ans) {
            if (cur == goal) {
                // cout << "ans found \n";
                // do some changes here  
                // cout << a << ", " << b << ", " << c << endl;
                ans[0] = a;
                ans[1] = b;
                ans[2] = c;
                return;
            }

            if (cur > goal) {
                return;

            }

            // make three recursive calls
            recursive_find(goal, cur * 5, a, b, c + 1, 'c', depth, ans);
            recursive_find(goal, cur * 3, a, b + 1, c, 'b', depth, ans);
            recursive_find(goal, cur * 2, a + 1, b, c, 'a', depth, ans);
         }


		 //Implement this function
		 void update_val(int new_val)
		 {
            vector<int> ans;
            int current = 1;
            int twos = 0, threes = 0, fives = 0;
            char inc = 'n';
            // int N = 180;
            int depth = 0;
            // suppose new_val is 180
            recursive_find(new_val, current, twos, threes, fives, inc, depth, ans);


			
		 }
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};



void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);

}