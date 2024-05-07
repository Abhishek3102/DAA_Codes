public class NQueens {

    public static void main(String[] args) {
        int n = 8;
        solveNQueens(n);
    }

    public static void solveNQueens(int n) {
        int[][] board = new int[n][n];

        if (solveNQueensUtil(board, 0, n)) {
            printBoard(board);
        } else {
            System.out.println("Solution does not exist");
        }
    }

    private static boolean solveNQueensUtil(int[][] board, int col, int n) {
        if (col == n) {
            return true;
        }

        for (int i = 0; i < n; i++) {
            if (isSafe(board, i, col, n)) {
                board[i][col] = 1;

                if (solveNQueensUtil(board, col + 1, n)) {
                    return true;
                }
                board[i][col] = 0;
            }
        }

        return false;
    }

    private static boolean isSafe(int[][] board, int row, int col, int n) {
        for (int i = 0; i < col; i++) {
            if (board[row][i] == 1) {
                return false;
            }
        }
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 1) {
                return false;
            }
        }
        for (int i = row, j = col; i < n && j >= 0; i++, j--) {
            if (board[i][j] == 1) {
                return false;
            }
        }

        return true;
    }

    private static void printBoard(int[][] board) {
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }
    }
}