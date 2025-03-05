#include <bits/stdc++.h>
using namespace std;

void print(int arr[][10], int n, int m) {

		int startRow = 0;    int startCol = 0;
	  int endRow = n - 1;    int endCol = m - 1;

	while (startRow <= endRow and startCol <= endCol) {

		// row fixed, first
		for (int col = startRow; col <= endCol; col++) {
			cout << arr[startRow][col] << " ";
		}

		// col fixed, end
		for (int row = startRow + 1; row <= endRow; row++) {
			// if (startRow == endRow) {
			// 	break;
			// }
			cout << arr[row][endCol] << " ";
		}

		// row fixed, last
		for (int col = endCol - 1; col >= startCol; col--) {
			if (startRow == endRow) {
				break;
			}
			cout << arr[endRow][col] << " ";
		}

		// col fixed, first
		for (int row = endRow - 1; row >= startRow + 1; row--) {
			if (startCol == endCol) {
				break;
			}
			cout << arr[row][startCol] << " ";
		}

		cout << endl;

		startRow++;
		startCol++;
		endRow--;
		endCol--;
	}
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	#endif

	int arr[][10] = {
		{1,  2,  3,  4 },
		{12, 13, 14, 5 },
		{11, 16, 15, 6 },
		{10,  9,  8, 7 }
	};

	int n = 4, m = 4;

	print(arr, n, m);
	
	return 0;
}