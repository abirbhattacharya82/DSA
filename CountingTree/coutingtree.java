// Java program for above approach
import java.io.*;
class GFG {

public static int R = 5;
public static int C = 4;
public static void WavePrint(int m, int n, int[][] arr)
{
	for (int j = 0; j < n; j++) {
	if (j % 2 == 0) {
		for (int i = 0; i < m; i++) {
		System.out.print(arr[i][j] + " ");
		}
	}
	else {
		for (int i = m - 1; i >= 0; i--) {
		System.out.print(arr[i][j] + " ");
		}
	}
	}
}

// Driver Code
public static void main (String[] args)
{
	int[][] arr = { { 1, 2, 3, 4 },
				{ 5, 6, 7, 8 },
				{ 9, 10, 11, 12 },
				{ 13, 14, 15, 16 },
				{ 17, 18, 19, 20 } };

	WavePrint(R, C, arr);
}
}