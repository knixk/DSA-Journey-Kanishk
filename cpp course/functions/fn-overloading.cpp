#include <iostream>
#include <string>
using namespace std;


/* 
NOTE:

*/

// give an example of function overloading..

/* 
write 4 fns or as many with same names

KEEP IN MIND THE RETURN TYPE OF THESE FUNCTIONS
CAN BE DIFFERENT, IT WON'T MATTER
BUT TO DIFFERENTIATE B/W OTHERS,

THEIR ARGS SHOULD ALSO BE UNIQUE
*/
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}


// not sure how to work on this
// figure this one out with gpt or else
string add(char a, char b) {

}


void gamer() {
    cout << "hi1" << endl;
}
void gamer(int a) {
    
    cout << "hi2 " << endl;

}

void gamer(float a) {
    cout << "hi3" << endl;
    
}

void gamer(int a, int b) {
    cout << "hi4" << endl;
    
}


int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    #endif

    float ff = 3.14;
    int a = 10, b = 20;

    // we called these fns
    /*
    although they have same names,
    their behaviour is rather unique
     */
    gamer();
    gamer(a);
    gamer(ff);
    gamer(a, b);


    gamer();

	return 0;
}