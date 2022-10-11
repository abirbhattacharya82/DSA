#include <bits/stdc++.h>
using namespace std;

#define R 5
#define C 4

// Function to print wave
// Form for a given matrix
void WavePrint(int m, int n, int arr[R][C])
{
	// Loop to traverse matrix
	for (int j = 0; j < n; j++) {
		if (j % 2 == 0) {
			for (int i = 0; i < m; i++) {
				cout << arr[i][j] << " ";
			}
		}
		else {
			for (int i = m - 1; i >= 0; i--) {
				cout << arr[i][j] << " ";
			}
		}
	}
}

// Driver Code
int main()
{
	int arr[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 },
					{ 17, 18, 19, 20 } };

	WavePrint(R, C, arr);

	return 0;
}
