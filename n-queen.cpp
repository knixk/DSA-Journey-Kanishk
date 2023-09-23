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

bool canPlace(int board[][20], int n, int x, int y) {

	// check for top
	for (int i = 0; i < x; i++) {

		if (board[i][y] == 1) {
			return false;
		}

	}

	// check for left diag

	int i = x, j = y;

	while (i >= 0 and j >= 0) {
		if (board[i][j]) {
			return false;
		}
		i--; 
		j--;
	}

	// check for right diag

	i = x; j = y;

	while (i >= 0 and j < n) {
		if (board[i][j]) {
			return false;
		}
		i++; 
		j--;
	}

	return true;

}

bool placeNQueens(int board[][20], int n, int i) {

	cout << "running" << "\n";

	if (i == n) {
		printAns(board, n);
		return true;
	}

	for (int j = 0; j < n; j++) {

		board[i][j] = 1;

		bool ans = canPlace(board, n, i + 1, j);

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

	bool ans = placeNQueens(board, n, 0);

	if (!ans) {
		cout << "Couldn't place";
	}

	return 0;
}
