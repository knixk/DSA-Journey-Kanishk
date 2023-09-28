#include <iostream>
#include <cmath>
using namespace std;


// can you solve sudoku?

int main() {

	int arr[9][9] = {
	    
	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},
	    

	    
	};

    int n = sizeof(arr) / sizeof(int);
    
    // for (int i = 0; i < n; i++) {
        
    //     for (int j = 0; j < n; j++) {
            
    //         cout << arr[i][j];
            
    //     }
        
    //     cout << endl;
        
    // }
    
    cout << n;

	return 0;
}



