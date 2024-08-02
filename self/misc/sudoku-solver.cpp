#include <iostream>
#include <cmath>
using namespace std;


// can you solve sudoku?

bool canBeSolved(int board, int n, int i, int j) {



}

bool solveSudoku(int board, int n, int i, int j) {

	for (int )

}


int main() {

	int board [ 9 ] [ 9 ] = {
	    
	    {3,   0,   0,   2,   0,   1,   0,   0,   0},

	    {0,   1,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   0,   5,   0,   0,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   7,   0,   0,   9,   0},

	    {0,   0,   0,   0,   0,   0,   0,   0,   0},

	    {0,   9,   0,   0,   0,   0,   0,   0,   0},

	    {0,   0,   0,   0,   6,   0,   0,   0,   0},

	    {0,   0,   0,   3,   0,   0,   0,   2,   0},

	    
	};

    int n = sizeof(board) / sizeof(int);

    bool canBeSolved = solveSudoku(board, n);

    if (!canBeSolved) {
    	cout << "Can't be solved";
    }
    
    // for (int i = 0; i < n; i++) {
        
    //     for (int j = 0; j < n; j++) {
            
    //         cout << arr[i][j];
            
    //     }
        
    //     cout << endl;
        
    // }
    
    // cout << n;

	return 0;
}



