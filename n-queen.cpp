#include<bits/stdc++.h>
using namespace std;

void printAns(int board[][20], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << board[i][j] << " ";
		}

		cout << "\n";
	}
}

bool canPlace(int board[][20], int n, int i) {

	// check for top
	
	
	// check for left diag


	// check for right diag
	

}

void placeNQueens(int board[][20], int n, int i) {

	if (i == n) {
		return;
	}

	for (int j = 0; j < n; j++) {

		board[i][j] = 1;

		bool ans = canPlace(board, n, i + 1);

		if (ans) {
			return true;
		}

		// go back

		board[i][j] = 0;

	}

	return false;

}

int main() {

	int board[20][20] = {0};
	int n; cin >> n;

	placeNQueens(board, n, 0);

	printAns(board, n);

	return 0;
}
