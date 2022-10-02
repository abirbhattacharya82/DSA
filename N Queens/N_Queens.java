import java.util.Scanner;

public class N_Queens {
    public static void main(String[] args) {
        System.out.println("Enter the value of 'N':");
        int n = new Scanner(System.in).nextInt();
        for(int i=0; i<n; i++)
            queens(new boolean[n][n], 0, i);
    }
    private static void queens(boolean[][] board, int row, int col) {
        if(row == board.length){
            if(board[row-1][col])
                displayBoard(board);
            return ;
        }

        if(isSafe(board, row, col)) {
            board[row][col] = true;
            for(int c = 0; c<board.length; c++) {
                queens(board, row + 1, c);
            }
            board[row][col] = false;
        }
    }
    private static boolean isSafe(boolean[][] board, int row, int col) {
        int ld = col,           // Left diagonal pointer
            rd = col;           // Right diagonal pointer

        while(--row>=0){        // Checking Vertically
            if(board[row][col]) // Checking the column above (row,col)
                return false;
            if(--ld>=0 && board[row][ld]) // Checking left diagonal
                return false;
            if(++rd<board.length && board[row][rd]) // Checking right diagonal
                return false;
        }
        return true;
    }
    private static void displayBoard(boolean[][] board) {
        for(boolean[] row : board){
            for(boolean element : row){
                if(element)
                    System.out.print("Q ");
                else
                    System.out.print(". ");
            }
            System.out.println();
        }  
        System.out.println();
    }
}