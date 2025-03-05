#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    private:
    int l, b, h;
    public:
     Box() {
        l = 0;
        h = 0;
        b = 0;
     }
     
     Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
     }
     
     Box(Box & x) {
        l = x.getLength();
        h = x.getHeight();
        b = x.getBreadth();
     }
     
         // getters & setters
    int getLength() {
     return l;
    }
    
    int getBreadth() {
     return b;
    }
    
    int getHeight() {
     return h;
    }
    
    long long CalculateVolume() {
        long long ans = (long long) l * b * h;
        return ans;
    }
        
    bool operator<(const Box& B) {
        bool ans = false;
        if (l < B.l ) {
            if (b < B.b and l == B.l) {
                if (h < B.h and b == B.b and l == B.l) {
                    ans = true;
                }
            }
        }
        
        return ans;
    }
    
    friend ostream& operator<<(ostream& out, const Box& B);
    
    // ostream& operator<<(ostream& out, Box B) {
    //     return out << B.getLength() << ' ' << B.getBreadth() << ' ' << B.getHeight();
    // }
    
 
};

   ostream& operator<<(ostream& out, const Box& B) {
    return out << B.l << ' ' << B.b << ' ' << B.h;
    }

    


void check2()
{
    int n;
    cin>>n;
    Box temp;
    for(int i=0;i<n;i++)
    {
        int type;
        cin>>type;
        if(type ==1)
        {
            cout<<temp<<endl;
        }
        if(type == 2)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            temp=NewBox;
            cout<<temp<<endl;
        }
        if(type==3)
        {
            int l,b,h;
            cin>>l>>b>>h;
            Box NewBox(l,b,h);
            if(NewBox<temp)
            {
                cout<<"Lesser\n";
            }
            else
            {
                cout<<"Greater\n";
            }
        }
        if(type==4)
        {
            cout<<temp.CalculateVolume()<<endl;
        }
        if(type==5)
        {
            Box NewBox(temp);
            cout<<NewBox<<endl;
        }

    }
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif
    check2();
}