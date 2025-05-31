// For 2 given matrices of size n x n. Your task is to multiply them.
 

// Example 1:â€‹

// â€‹Input: 
// matrixA = {{1, 1, 1}, {1, 1, 1}, 
//            {1, 1, 1}}
// matrixB = {{1, 1, 1}, {1, 1, 1},
//            {1, 1, 1}}
// Output: {{3, 3, 3}, {3, 3, 3}, {3, 3, 3}}
// Example 2:

// Input: 
// matrixA = {{1, 2}, {3, 4}},
// matrixB = {{4, 3}, {2, 1}}
// Output: {{8, 5}, {20, 13}}
 

// Your Task:
// You don't need to read or print anything. Your task is to complete the function Multiply() which takes two matrices matrixA amd matrixB as input parameter and multiply the two matrices. You don't have to return anything. Copy the values of output matrix into matrixA.
 

// Expected Time Compelxity: O(n3)
// Expected Space Complexity: O(n2)
 

// Constraints:
// 1 <= n <= 100
// 1 <= elements of matrices <= 100


class Solution {
public:
    void Multiply(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB) {
        int m = matrixA.size();           // Rows in A
        int n = matrixA[0].size();        // Columns in A 
        int p = matrixB[0].size();        // Columns in B

        
        vector<vector<int>> result(m, vector<int>(p, 0));

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < n; k++) {
                    result[i][j] += matrixA[i][k] * matrixB[k][j];
                }
            }
        }

        
        matrixA = result;
    }
};

