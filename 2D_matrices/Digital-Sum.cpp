// Given a square matrix of size n×n. Your task is to calculate the sum of its diagonals.
 

// Example 1:

// Input: matrix = {{1, 1, 1}, 
// {1, 1, 1}, {1, 1, 1}}
// Output: 6
// Example 2:

// Input: matrix = {{1, 2}, {3, 4}}
// Output: 10
 

// Your Task:
// You don't need to read or print anyhting. Your task is to complete the function DiagonalSum() which takes the matrix as input parameter and returns the sum of its diagonals.
 

// Expected Time Complexity: O(n)
// Expected Space Complexity: O(1)

// Constraints:
// 1 <= n <= 100
// 1 <= matrix elements <= 10000


// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int sum =0;
       for (int i = 0; i < n; i++) {
            sum += matrix[i][i]; // Primary diagonal
        }

        int i = 0, j = n - 1;
        while (i < n && j >= 0) {
            sum += matrix[i][j]; // Secondary diagonal
            i++;
            j--;
        }
        return sum;
    }
};